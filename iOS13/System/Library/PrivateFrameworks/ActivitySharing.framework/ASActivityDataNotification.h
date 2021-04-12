/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/


@class ASFriend;

@interface ASActivityDataNotification : NSObject {

	ASFriend* _friend;
	id _sample;

}

@property (nonatomic,retain) ASFriend * friend;              //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) id sample;                      //@synthesize sample=_sample - In the implementation block
-(void)setSample:(id)arg1 ;
-(id)sample;
-(ASFriend *)friend;
-(void)setFriend:(ASFriend *)arg1 ;
@end

