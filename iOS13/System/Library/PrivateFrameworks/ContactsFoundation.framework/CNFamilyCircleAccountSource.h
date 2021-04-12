/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNDelegateAccountSource.h>

@class FAFamilyCircle, NSString;

@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource> {

	FAFamilyCircle* _familyCircle;

}

@property (nonatomic,readonly) FAFamilyCircle * familyCircle;              //@synthesize familyCircle=_familyCircle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)primaryAccount;
-(id)initWithFamilyCircle:(id)arg1 ;
-(FAFamilyCircle *)familyCircle;
-(id)delegateAccounts;
-(id)myFamilyMemberRecord;
@end

