/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIDSAccount.h>

@class IDSAccount;

@interface CRKConcreteIDSAccount : NSObject <CRKIDSAccount> {

	IDSAccount* _account;

}

@property (nonatomic,readonly) IDSAccount * account;                     //@synthesize account=_account - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(IDSAccount *)account;
-(BOOL)isActive;
-(id)initWithAccount:(id)arg1 ;
-(id)listenForAccountActiveWithHandler:(/*^block*/id)arg1 ;
@end

