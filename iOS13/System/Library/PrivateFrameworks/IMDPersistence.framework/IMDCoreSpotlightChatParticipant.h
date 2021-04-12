/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CNContact *)contact;
-(NSString *)handleID;
-(BOOL)isSender;
-(id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(BOOL)arg3 ;
@end

