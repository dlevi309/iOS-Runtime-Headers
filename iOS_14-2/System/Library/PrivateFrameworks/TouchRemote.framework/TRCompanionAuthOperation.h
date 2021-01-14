/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TROperation.h>

@class ACAccount, NSSet;

@interface TRCompanionAuthOperation : TROperation {

	ACAccount* _account;
	NSSet* _targetedServices;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSSet * targetedServices;              //@synthesize targetedServices=_targetedServices - In the implementation block
-(void)execute;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(NSSet *)targetedServices;
@end

