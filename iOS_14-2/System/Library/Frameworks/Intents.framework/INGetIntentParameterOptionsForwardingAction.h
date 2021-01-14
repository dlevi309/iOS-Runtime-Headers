/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentForwardingAction.h>

@class NSString;

@interface INGetIntentParameterOptionsForwardingAction : INIntentForwardingAction {

	NSString* _parameterName;
	NSString* _searchTerm;

}

@property (nonatomic,readonly) NSString * parameterName;              //@synthesize parameterName=_parameterName - In the implementation block
@property (nonatomic,readonly) NSString * searchTerm;                 //@synthesize searchTerm=_searchTerm - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)searchTerm;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIntent:(id)arg1 parameterName:(id)arg2 searchTerm:(id)arg3 ;
-(NSString *)parameterName;
-(/*^block*/id)_completionHandlerWithActionCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

