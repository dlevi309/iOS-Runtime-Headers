/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHandle:(IMHandle *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(IMHandle *)handle;
-(IMNickname *)nickname;
-(id)description;
-(unsigned long long)updateType;
-(id)_updatedName;
-(id)listTitleText;
-(id)contactWithUpdatedInformation;
-(id)listSubtitleText;
-(void)setNickname:(IMNickname *)arg1 ;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

