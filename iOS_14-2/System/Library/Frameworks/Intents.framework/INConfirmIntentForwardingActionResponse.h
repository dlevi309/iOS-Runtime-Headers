/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class INIntentResponse, NSData, NSSet;

@interface INConfirmIntentForwardingActionResponse : INIntentForwardingActionResponse {

	INIntentResponse* _intentResponse;
	NSData* _launchContextActivityData;
	NSSet* _cacheItems;

}

@property (nonatomic,readonly) INIntentResponse * intentResponse;               //@synthesize intentResponse=_intentResponse - In the implementation block
@property (nonatomic,readonly) NSData * launchContextActivityData;              //@synthesize launchContextActivityData=_launchContextActivityData - In the implementation block
@property (nonatomic,readonly) NSSet * cacheItems;                              //@synthesize cacheItems=_cacheItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INIntentResponse *)intentResponse;
-(NSSet *)cacheItems;
-(id)initWithIntentResponse:(id)arg1 launchContextActivityData:(id)arg2 cacheItems:(id)arg3 error:(id)arg4 ;
-(NSData *)launchContextActivityData;
@end

