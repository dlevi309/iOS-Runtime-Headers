/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class CNContact, NSString, NSArray, NSMutableArray, IMHandle;

@interface IMMe : NSObject {

	CNContact* _cnContact;
	NSString* _cnNickname;
	NSString* _cnFirstName;
	NSString* _cnFullName;
	NSString* _cnLastName;
	NSArray* _cnEmails;
	NSMutableArray* _cnIMHandles;
	NSMutableArray* _loginIMHandles;

}

@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) CNContact * cnContact;                //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) NSString * nickname; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSArray * emails; 
@property (nonatomic,readonly) IMHandle * bestIMHandle; 
@property (nonatomic,readonly) NSArray * imHandles; 
+(id)me;
+(id)imHandleForService:(id)arg1 ;
+(id)fallbackUserName;
+(id)firstNameFromFallbackUserName;
+(id)lastNameFromFallbackUserName;
-(NSString *)firstName;
-(BOOL)removeIMHandle:(id)arg1 ;
-(NSString *)lastName;
-(BOOL)isIMHandleLoginIMHandle:(id)arg1 ;
-(void)rebuildIMHandles;
-(BOOL)addIMHandle:(id)arg1 ;
-(NSString *)fullName;
-(NSString *)guid;
-(id)init;
-(NSArray *)imHandles;
-(BOOL)addLoginIMHandle:(id)arg1 ;
-(id)loginIMHandles;
-(id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2 ;
-(NSString *)nickname;
-(NSArray *)emails;
-(CNContact *)cnContact;
-(id)description;
-(BOOL)removeLoginIMHandle:(id)arg1 ;
-(void)myPictureChanged;
-(void)setCNContact:(id)arg1 ;
-(void)resetABPerson;
-(NSString *)email;
-(IMHandle *)bestIMHandle;
@end

