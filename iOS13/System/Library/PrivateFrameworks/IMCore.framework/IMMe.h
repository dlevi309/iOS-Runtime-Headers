/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class IMPerson, CNContact, NSString, NSArray, NSMutableArray, IMHandle;

@interface IMMe : NSObject {

	IMPerson* _person;
	CNContact* _cnContact;
	NSString* _abNickname;
	NSString* _abFirstName;
	NSString* _abFullName;
	NSString* _abLastName;
	NSArray* _abEmails;
	NSMutableArray* _abIMHandles;
	NSMutableArray* _loginIMHandles;

}

@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) IMPerson * person; 
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
+(id)fallbackUserName;
+(id)firstNameFromFallbackUserName;
+(id)lastNameFromFallbackUserName;
+(id)imHandleForService:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)nickname;
-(NSString *)fullName;
-(NSString *)email;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)guid;
-(IMPerson *)person;
-(NSArray *)emails;
-(CNContact *)cnContact;
-(BOOL)removeLoginIMHandle:(id)arg1 ;
-(void)resetABPerson;
-(BOOL)addLoginIMHandle:(id)arg1 ;
-(void)setIMPerson:(id)arg1 ;
-(BOOL)removeIMHandle:(id)arg1 ;
-(BOOL)addIMHandle:(id)arg1 ;
-(void)myPictureChanged;
-(void)rebuildIMHandles;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2 ;
-(void)setCNContact:(id)arg1 ;
-(NSArray *)imHandles;
-(id)loginIMHandles;
-(BOOL)isIMHandleLoginIMHandle:(id)arg1 ;
-(IMHandle *)bestIMHandle;
@end

