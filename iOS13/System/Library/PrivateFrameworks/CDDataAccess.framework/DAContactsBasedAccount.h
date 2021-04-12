/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)identifier;
-(CNAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)isGroup;
-(BOOL)isContact;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(BOOL)isContainer;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(BOOL)markedForDeletion;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
@end

