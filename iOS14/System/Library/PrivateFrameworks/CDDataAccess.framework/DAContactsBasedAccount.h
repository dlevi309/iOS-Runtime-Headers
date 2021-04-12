/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/

#import <libobjc.A.dylib/DAContactsAccount.h>

@class CNAccount, NSString;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount> {

	BOOL _markedForDeletion;
	CNAccount* _account;

}

@property (nonatomic,readonly) CNAccount * account;                 //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNAccount *)account;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(int)legacyIdentifier;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)externalIdentifier;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(id)identifier;
-(void)markForDeletion;
-(id)initWithAccount:(id)arg1 ;
@end

