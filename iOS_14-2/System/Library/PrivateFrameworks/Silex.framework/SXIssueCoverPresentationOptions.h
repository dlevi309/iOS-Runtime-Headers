/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)parentBackgroundColor;
-(id)initWithSize:(CGSize)arg1 videoPlaybackEnabled:(BOOL)arg2 parentBackgroundColor:(id)arg3 ;
@end

