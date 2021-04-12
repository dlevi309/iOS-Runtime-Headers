/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@class CNContact, CNLabeledValue, NSString;

@interface IMAssistantHandleFromContact : NSObject {

	CNContact* _contact;
	CNLabeledValue* _labeledEmailAddress;
	CNLabeledValue* _labeledPhoneNumber;
	NSString* _businessID;
	NSString* _displayID;
	long long _handleType;

}

@property (nonatomic,readonly) long long handleType;                              //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNLabeledValue * labeledEmailAddress;              //@synthesize labeledEmailAddress=_labeledEmailAddress - In the implementation block
@property (nonatomic,readonly) CNLabeledValue * labeledPhoneNumber;               //@synthesize labeledPhoneNumber=_labeledPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * businessID;                             //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) NSString * handleID; 
@property (nonatomic,readonly) NSString * displayID;                              //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,readonly) long long personHandleType; 
@property (nonatomic,readonly) NSString * personHandleLabel; 
-(CNContact *)contact;
-(NSString *)handleID;
-(long long)handleType;
-(id)description;
-(NSString *)displayID;
-(NSString *)businessID;
-(BOOL)matchesIMHandle:(id)arg1 ;
-(id)initWithCNLabeledPhoneNumber:(id)arg1 contact:(id)arg2 ;
-(id)initWithCNLabeledEmailAddress:(id)arg1 contact:(id)arg2 ;
-(id)initWithBusinessID:(id)arg1 ;
-(long long)personHandleType;
-(NSString *)personHandleLabel;
-(BOOL)matchesHandleID:(id)arg1 ;
-(id)_initWithPhoneNumber:(id)arg1 emailAddress:(id)arg2 businessID:(id)arg3 handleType:(long long)arg4 contact:(id)arg5 ;
-(CNLabeledValue *)labeledPhoneNumber;
-(CNLabeledValue *)labeledEmailAddress;
@end

