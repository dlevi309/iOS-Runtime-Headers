/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSArray;

@interface NNMKMailboxSelectionChanges : NSObject {

	NSArray* _mailboxesToUpdate;
	NSArray* _mailboxesToReSync;
	NSArray* _mailboxesToDisableSync;

}

@property (nonatomic,retain) NSArray * mailboxesToUpdate;                   //@synthesize mailboxesToUpdate=_mailboxesToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * mailboxesToReSync;                   //@synthesize mailboxesToReSync=_mailboxesToReSync - In the implementation block
@property (nonatomic,retain) NSArray * mailboxesToDisableSync;              //@synthesize mailboxesToDisableSync=_mailboxesToDisableSync - In the implementation block
-(void)setMailboxesToUpdate:(NSArray *)arg1 ;
-(void)setMailboxesToReSync:(NSArray *)arg1 ;
-(void)setMailboxesToDisableSync:(NSArray *)arg1 ;
-(NSArray *)mailboxesToUpdate;
-(NSArray *)mailboxesToReSync;
-(NSArray *)mailboxesToDisableSync;
@end

