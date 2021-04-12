/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSData, GKPlayer;

@interface GKMatchEvent : NSObject {

	NSData* _data;
	GKPlayer* _recipientPlayer;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) GKPlayer * recipientPlayer;              //@synthesize recipientPlayer=_recipientPlayer - In the implementation block
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(GKPlayer *)recipientPlayer;
-(void)setRecipientPlayer:(GKPlayer *)arg1 ;
@end

