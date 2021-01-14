/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class NSString, CNContact;

@interface GKUnifiedRecipient : NSObject {

	NSString* _fullName;
	NSString* _handle;
	NSString* _nickName;
	NSString* _label;
	CNContact* _contact;

}

@property (nonatomic,retain) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * handle;                //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * nickName;              //@synthesize nickName=_nickName - In the implementation block
@property (nonatomic,retain) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
+(id)recipientForHandle:(id)arg1 ;
+(id)recipientForContact:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(CNContact *)contact;
-(NSString *)fullName;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)handle;
-(NSString *)nickName;
-(void)setNickName:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)displayName;
-(NSString *)label;
@end

