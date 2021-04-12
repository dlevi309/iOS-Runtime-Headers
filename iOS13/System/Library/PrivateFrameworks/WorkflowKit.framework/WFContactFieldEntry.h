/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class NSString, WFContact, WFPhoneNumber, WFEmailAddress;

@interface WFContactFieldEntry : NSObject <WFNaming, WFParameterState> {

	long long _type;
	WFContact* _contact;
	WFPhoneNumber* _phoneNumber;
	WFEmailAddress* _emailAddress;

}

@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) WFContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) WFPhoneNumber * phoneNumber;                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) WFEmailAddress * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)predictedEntryTypeForHandleValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(WFPhoneNumber *)phoneNumber;
-(id)serializedRepresentation;
-(WFContact *)contact;
-(WFEmailAddress *)emailAddress;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)underlyingObject;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(NSString *)wfName;
-(id)initWithHandleString:(id)arg1 ;
@end

