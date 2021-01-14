/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDefaults:(id)arg1 key:(id)arg2 ;
-(void)add:(id)arg1 ;
@end

