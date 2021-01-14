/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/


@class ASFriend;

@interface ASActivityDataNotification : NSObject {

	ASFriend* _friend;
	id _sample;

}

@property (nonatomic,retain) ASFriend * friend;              //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) id sample;                      //@synthesize sample=_sample - In the implementation block
-(id)sample;
-(ASFriend *)friend;
-(void)setFriend:(ASFriend *)arg1 ;
-(void)setSample:(id)arg1 ;
@end

