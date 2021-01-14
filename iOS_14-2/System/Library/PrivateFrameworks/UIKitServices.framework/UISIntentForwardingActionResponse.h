/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <BaseBoard/BSActionResponse.h>

@class INIntentResponse, INIntentForwardingActionResponse;

@interface UISIntentForwardingActionResponse : BSActionResponse {

	INIntentResponse* _cachedIntentResponse;
	INIntentForwardingActionResponse* _cachedIntentForwardingActionResponse;

}

@property (nonatomic,readonly) INIntentResponse * intentResponse; 
@property (nonatomic,readonly) INIntentForwardingActionResponse * intentForwardingActionResponse; 
+(id)responseWithIntentResponse:(id)arg1 ;
+(id)responseWithIntentForwardingActionResponse:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(INIntentResponse *)intentResponse;
-(INIntentForwardingActionResponse *)intentForwardingActionResponse;
-(id)initWithIntentResponse:(id)arg1 ;
-(id)initWithIntentForwardingActionResponse:(id)arg1 ;
@end

