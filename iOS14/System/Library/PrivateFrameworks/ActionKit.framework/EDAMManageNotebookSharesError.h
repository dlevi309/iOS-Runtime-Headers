/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class EDAMUserIdentity, EDAMUserException, EDAMNotFoundException;

@interface EDAMManageNotebookSharesError : FATObject {

	EDAMUserIdentity* _userIdentity;
	EDAMUserException* _userException;
	EDAMNotFoundException* _notFoundException;

}

@property (nonatomic,retain) EDAMUserIdentity * userIdentity;                        //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,retain) EDAMUserException * userException;                      //@synthesize userException=_userException - In the implementation block
@property (nonatomic,retain) EDAMNotFoundException * notFoundException;              //@synthesize notFoundException=_notFoundException - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMUserIdentity *)userIdentity;
-(void)setUserIdentity:(EDAMUserIdentity *)arg1 ;
-(EDAMUserException *)userException;
-(void)setUserException:(EDAMUserException *)arg1 ;
-(EDAMNotFoundException *)notFoundException;
-(void)setNotFoundException:(EDAMNotFoundException *)arg1 ;
@end

