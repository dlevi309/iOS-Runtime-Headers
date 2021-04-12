/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentForwardingAction.h>

@class NSString;

@interface INGetIntentParameterDefaultValueForwardingAction : INIntentForwardingAction {

	NSString* _parameterName;

}

@property (nonatomic,copy,readonly) NSString * parameterName;              //@synthesize parameterName=_parameterName - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(id)initWithIntent:(id)arg1 parameterName:(id)arg2 ;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)parameterName;
-(/*^block*/id)_completionHandlerWithActionCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

