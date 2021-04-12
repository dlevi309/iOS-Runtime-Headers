/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSArray;

@interface TVPBoundaryTimeObserverInfo : NSObject {

	NSArray* _times;
	/*^block*/id _handler;
	id _tokenFromAVPlayer;

}

@property (nonatomic,copy) NSArray * times;                     //@synthesize times=_times - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) id tokenFromAVPlayer;              //@synthesize tokenFromAVPlayer=_tokenFromAVPlayer - In the implementation block
-(void)setHandler:(id)arg1 ;
-(NSArray *)times;
-(id)handler;
-(void)setTimes:(NSArray *)arg1 ;
-(id)tokenFromAVPlayer;
-(void)setTokenFromAVPlayer:(id)arg1 ;
@end

