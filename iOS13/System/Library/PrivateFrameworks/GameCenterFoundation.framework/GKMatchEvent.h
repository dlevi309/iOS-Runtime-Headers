/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSData, GKPlayer;

@interface GKMatchEvent : NSObject {

	NSData* _data;
	GKPlayer* _recipientPlayer;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) GKPlayer * recipientPlayer;              //@synthesize recipientPlayer=_recipientPlayer - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(GKPlayer *)recipientPlayer;
-(void)setRecipientPlayer:(GKPlayer *)arg1 ;
@end

