/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HMService, NSString;

@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HMService* _service;
	NSString* _homeIdentifier;

}

@property (nonatomic,retain) HMService * service;                     //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * homeIdentifier;                 //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
-(BOOL)isHidden;
-(void)setService:(HMService *)arg1 ;
-(NSString *)homeIdentifier;
-(void)setHomeIdentifier:(NSString *)arg1 ;
-(NSArray *)possibleStates;
-(HMService *)service;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)setService:(id)arg1 homeIdentifier:(id)arg2 ;
-(void)updatePossibleStates;
@end

