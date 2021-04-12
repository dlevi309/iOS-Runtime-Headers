/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(HMService *)service;
-(NSString *)homeIdentifier;
-(id)initWithService:(id)arg1 homeIdentifier:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)serializedService;
-(void)setSerializedService:(NSDictionary *)arg1 ;
@end

