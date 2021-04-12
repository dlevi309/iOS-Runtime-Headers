/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, EDAMUserException, EDAMNotFoundException;

@interface EDAMManageNoteSharesError : FATObject {

	NSNumber* _identityID;
	NSNumber* _userID;
	EDAMUserException* _userException;
	EDAMNotFoundException* _notFoundException;

}

@property (nonatomic,retain) NSNumber * identityID;                                  //@synthesize identityID=_identityID - In the implementation block
@property (nonatomic,retain) NSNumber * userID;                                      //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) EDAMUserException * userException;                      //@synthesize userException=_userException - In the implementation block
@property (nonatomic,retain) EDAMNotFoundException * notFoundException;              //@synthesize notFoundException=_notFoundException - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setUserID:(NSNumber *)arg1 ;
-(NSNumber *)userID;
-(EDAMUserException *)userException;
-(void)setUserException:(EDAMUserException *)arg1 ;
-(EDAMNotFoundException *)notFoundException;
-(void)setNotFoundException:(EDAMNotFoundException *)arg1 ;
-(NSNumber *)identityID;
-(void)setIdentityID:(NSNumber *)arg1 ;
@end

