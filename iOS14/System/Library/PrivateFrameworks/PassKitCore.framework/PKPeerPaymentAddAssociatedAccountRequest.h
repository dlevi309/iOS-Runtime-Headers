/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentAddAssociatedAccountRequest : PKPeerPaymentWebServiceRequest {

	NSString* _altDSID;
	NSString* _firstName;
	NSString* _lastName;
	unsigned long long _role;

}

@property (nonatomic,copy) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) unsigned long long role;              //@synthesize role=_role - In the implementation block
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setRole:(unsigned long long)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(unsigned long long)role;
@end

