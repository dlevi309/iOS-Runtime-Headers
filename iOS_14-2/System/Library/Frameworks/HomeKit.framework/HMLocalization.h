/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMFUnfairLock, NSArray, NSBundle;

@interface HMLocalization : NSObject {

	HMFUnfairLock* _lock;
	NSArray* _stringTable;
	NSBundle* _bundle;

}

@property (copy,readonly) NSArray * stringTable;              //@synthesize stringTable=_stringTable - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSArray *)stringTable;
-(id)getLocalizedString:(id)arg1 ;
-(id)getLocalizedOrCustomString:(id)arg1 ;
-(void)_updateLocalizedStrings;
-(void)handleLocaleDidChange:(id)arg1 ;
@end

