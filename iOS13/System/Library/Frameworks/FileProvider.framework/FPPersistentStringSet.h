/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSString, NSMutableSet, NSUserDefaults;

@interface FPPersistentStringSet : NSObject {

	NSString* _key;
	NSMutableSet* _strings;
	NSUserDefaults* _defaults;

}
-(void)remove:(id)arg1 ;
-(void)save;
-(BOOL)contains:(id)arg1 ;
-(void)add:(id)arg1 ;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 ;
@end

