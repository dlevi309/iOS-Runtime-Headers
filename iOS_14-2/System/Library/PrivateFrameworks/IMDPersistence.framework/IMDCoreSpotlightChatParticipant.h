/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class NSString, CNContact;

@interface IMDCoreSpotlightChatParticipant : NSObject {

	BOOL _isSender;
	NSString* _handleID;
	CNContact* _contact;

}

@property (nonatomic,copy,readonly) NSString * handleID;                //@synthesize handleID=_handleID - In the implementation block
@property (nonatomic,retain,readonly) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) BOOL isSender;                           //@synthesize isSender=_isSender - In the implementation block
-(CNContact *)contact;
-(NSString *)handleID;
-(BOOL)isSender;
-(void)dealloc;
-(id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(BOOL)arg3 ;
@end

