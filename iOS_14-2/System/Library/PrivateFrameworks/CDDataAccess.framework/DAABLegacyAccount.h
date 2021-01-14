/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/

#import <libobjc.A.dylib/DAContactsAccount.h>

@class NSString;

@interface DAABLegacyAccount : NSObject <DAContactsAccount> {

	void* _account;

}

@property (nonatomic,readonly) void* account;                       //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)account;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(int)legacyIdentifier;
-(id)initWithABAccout:(void*)arg1 ;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)externalIdentifier;
-(id)identifier;
-(void)markForDeletion;
-(void)dealloc;
@end

