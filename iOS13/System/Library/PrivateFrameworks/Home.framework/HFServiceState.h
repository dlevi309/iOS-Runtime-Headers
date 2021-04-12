/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString;

@interface HFServiceState : NSObject

@property (nonatomic,copy,readonly) NSString * stateTypeIdentifier; 
@property (nonatomic,readonly) long long primaryState; 
@property (nonatomic,readonly) long long priority; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
+(Class)stateClassForServiceDescriptor:(id)arg1 ;
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
+(id)optionalCharacteristicTypes;
+(id)stateForServiceDescriptor:(id)arg1 withBatchReadResponse:(id)arg2 ;
-(BOOL)isTransitioning;
-(id)initWithBatchReadResponse:(id)arg1 ;
@end

