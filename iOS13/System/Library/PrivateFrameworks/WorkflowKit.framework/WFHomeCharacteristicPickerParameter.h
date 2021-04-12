/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMService *)service;
-(NSArray *)possibleStates;
-(void)setService:(HMService *)arg1 ;
-(NSString *)homeIdentifier;
-(void)setHomeIdentifier:(NSString *)arg1 ;
-(void)setService:(id)arg1 homeIdentifier:(id)arg2 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)updatePossibleStates;
@end

