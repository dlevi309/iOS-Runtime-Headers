/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/


@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject {

	NSHashTable* _disabledContexts;
	BOOL _disabled;

}
+(id)sharedInstance;
-(id)init;
-(id)description;
-(void)disableAutomaticAppearanceForContext:(id)arg1 ;
-(void)enableAutomaticAppearanceForContext:(id)arg1 ;
@end

