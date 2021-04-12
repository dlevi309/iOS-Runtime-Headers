/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class IMHandle, IMNickname, CNContact;

@interface CKNicknameUpdate : NSObject {

	IMHandle* _handle;
	IMNickname* _nickname;
	CNContact* _contact;
	unsigned long long _updateType;

}

@property (nonatomic,retain) IMHandle * handle;                          //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) IMNickname * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) unsigned long long updateType;              //@synthesize updateType=_updateType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(IMHandle *)handle;
-(IMNickname *)nickname;
-(void)setNickname:(IMNickname *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setHandle:(IMHandle *)arg1 ;
-(unsigned long long)updateType;
-(void)setUpdateType:(unsigned long long)arg1 ;
@end

