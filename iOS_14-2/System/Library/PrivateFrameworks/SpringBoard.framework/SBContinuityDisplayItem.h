/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDisplayItem.h>

@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem {

	SBBestAppSuggestion* _appSuggestion;

}

@property (nonatomic,readonly) SBBestAppSuggestion * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
+(id)continuityAppDisplayItemWithBundleIdentifier:(id)arg1 appSuggestion:(id)arg2 ;
-(unsigned long long)hash;
-(SBBestAppSuggestion *)appSuggestion;
-(id)initWithType:(long long)arg1 displayIdentifier:(id)arg2 appSuggestion:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

