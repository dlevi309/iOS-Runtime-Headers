/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMFUnfairLock, NSDictionary;

@interface HMLocalization : NSObject {

	HMFUnfairLock* _lock;
	NSDictionary* _localizedStrings;

}

@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSDictionary *)localizedStrings;
-(id)getLocalizedOrCustomString:(id)arg1 ;
-(id)getLocalizedString:(id)arg1 ;
-(void)_updateLocalizedStrings;
-(void)handleLocaleDidChange:(id)arg1 ;
@end

