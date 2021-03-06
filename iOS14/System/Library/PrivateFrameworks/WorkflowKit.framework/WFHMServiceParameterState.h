/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class HMService, NSString, NSDictionary;

@interface WFHMServiceParameterState : NSObject <WFParameterState> {

	HMService* _service;
	NSString* _homeIdentifier;
	NSDictionary* _serializedService;

}

@property (nonatomic,retain) NSDictionary * serializedService;              //@synthesize serializedService=_serializedService - In the implementation block
@property (nonatomic,readonly) NSString * homeIdentifier;                   //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) HMService * service;                         //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serializedRepresentation;
-(NSString *)homeIdentifier;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMService *)service;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithService:(id)arg1 homeIdentifier:(id)arg2 ;
-(NSDictionary *)serializedService;
-(void)setSerializedService:(NSDictionary *)arg1 ;
@end

