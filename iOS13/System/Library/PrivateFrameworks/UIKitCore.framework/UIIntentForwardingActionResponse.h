/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSActionResponse.h>

@class INIntentResponse;

@interface UIIntentForwardingActionResponse : BSActionResponse {

	INIntentResponse* _cachedIntentResponse;

}

@property (nonatomic,readonly) INIntentResponse * intentResponse; 
+(id)responseWithIntentResponse:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(INIntentResponse *)intentResponse;
-(id)initWithIntentResponse:(id)arg1 ;
@end

