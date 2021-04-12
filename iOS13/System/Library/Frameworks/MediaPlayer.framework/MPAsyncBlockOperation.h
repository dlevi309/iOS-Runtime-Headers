/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@interface MPAsyncBlockOperation : MPAsyncOperation {

	/*^block*/id _startHandler;

}

@property (nonatomic,copy,readonly) id startHandler;              //@synthesize startHandler=_startHandler - In the implementation block
-(void)execute;
-(id)initWithStartHandler:(/*^block*/id)arg1 ;
-(id)startHandler;
@end

