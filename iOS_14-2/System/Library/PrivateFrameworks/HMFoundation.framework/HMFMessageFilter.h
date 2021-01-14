/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSString, NSArray;

@interface HMFMessageFilter : HMFObject <HMFLogging, HMFObject> {

	HMFMessage* _message;

}

@property (copy,readonly) HMFMessage * message;                                   //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(id)policyClasses;
+(BOOL)canInitWithMessage:(id)arg1 ;
-(HMFMessage *)message;
-(id)init;
-(id)logIdentifier;
-(BOOL)acceptWithPolicies:(id)arg1 error:(id*)arg2 ;
-(id)initWithMessage:(id)arg1 ;
-(NSArray *)attributeDescriptions;
@end

