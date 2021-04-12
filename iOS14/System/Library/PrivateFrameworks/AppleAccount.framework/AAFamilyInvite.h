/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSString, NSNumber;

@interface AAFamilyInvite : NSObject {

	BOOL _isChildTransferInvite;
	NSString* _code;
	NSString* _organizerFirstName;
	NSString* _organizerLastName;
	NSString* _organizerEmail;
	NSNumber* _organizerDSID;
	NSNumber* _recepientDSID;
	NSString* _childFirstName;
	NSString* _childLastName;

}

@property (nonatomic,copy) NSString * code;                            //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * organizerFirstName;              //@synthesize organizerFirstName=_organizerFirstName - In the implementation block
@property (nonatomic,copy) NSString * organizerLastName;               //@synthesize organizerLastName=_organizerLastName - In the implementation block
@property (nonatomic,copy) NSString * organizerEmail;                  //@synthesize organizerEmail=_organizerEmail - In the implementation block
@property (nonatomic,copy) NSNumber * organizerDSID;                   //@synthesize organizerDSID=_organizerDSID - In the implementation block
@property (nonatomic,copy) NSNumber * recepientDSID;                   //@synthesize recepientDSID=_recepientDSID - In the implementation block
@property (assign,nonatomic) BOOL isChildTransferInvite;               //@synthesize isChildTransferInvite=_isChildTransferInvite - In the implementation block
@property (nonatomic,copy) NSString * childFirstName;                  //@synthesize childFirstName=_childFirstName - In the implementation block
@property (nonatomic,copy) NSString * childLastName;                   //@synthesize childLastName=_childLastName - In the implementation block
-(void)setCode:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)code;
-(void)setOrganizerLastName:(NSString *)arg1 ;
-(void)setOrganizerFirstName:(NSString *)arg1 ;
-(void)setOrganizerEmail:(NSString *)arg1 ;
-(void)setOrganizerDSID:(NSNumber *)arg1 ;
-(void)setRecepientDSID:(NSNumber *)arg1 ;
-(NSString *)organizerFirstName;
-(NSString *)organizerLastName;
-(NSString *)organizerEmail;
-(NSNumber *)organizerDSID;
-(NSNumber *)recepientDSID;
-(BOOL)isChildTransferInvite;
-(void)setIsChildTransferInvite:(BOOL)arg1 ;
-(NSString *)childFirstName;
-(void)setChildFirstName:(NSString *)arg1 ;
-(NSString *)childLastName;
-(void)setChildLastName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

