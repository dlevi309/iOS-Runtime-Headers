/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class UIColor;

@interface SXIssueCoverPresentationOptions : NSObject {

	BOOL _videoPlaybackEnabled;
	UIColor* _parentBackgroundColor;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL videoPlaybackEnabled;                    //@synthesize videoPlaybackEnabled=_videoPlaybackEnabled - In the implementation block
@property (nonatomic,readonly) UIColor * parentBackgroundColor;              //@synthesize parentBackgroundColor=_parentBackgroundColor - In the implementation block
-(CGSize)size;
-(BOOL)videoPlaybackEnabled;
-(id)initWithSize:(CGSize)arg1 videoPlaybackEnabled:(BOOL)arg2 parentBackgroundColor:(id)arg3 ;
-(UIColor *)parentBackgroundColor;
@end

