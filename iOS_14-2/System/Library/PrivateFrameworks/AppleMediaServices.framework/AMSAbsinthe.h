/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSAbsinthe : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 ;
+(void)_signingDataFromRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_dataToSignFromRequest:(id)arg1 bagDefinition:(id)arg2 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)handleResponse:(id)arg1 bag:(id)arg2 ;
@end

