/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/JTClipSequencePlayerRequest.h>

@interface JTSeekRequest : JTClipSequencePlayerRequest {

	int _seekTime;

}

@property (assign,nonatomic) int seekTime;              //@synthesize seekTime=_seekTime - In the implementation block
-(id)description;
-(int)seekTime;
-(void)setSeekTime:(int)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 withSeekTime:(int)arg2 ;
@end

