/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDisplayItem.h>

@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem {

	SBBestAppSuggestion* _appSuggestion;

}

@property (nonatomic,readonly) SBBestAppSuggestion * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
+(id)continuityAppDisplayItemWithBundleIdentifier:(id)arg1 appSuggestion:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SBBestAppSuggestion *)appSuggestion;
-(id)initWithType:(long long)arg1 displayIdentifier:(id)arg2 appSuggestion:(id)arg3 ;
@end

