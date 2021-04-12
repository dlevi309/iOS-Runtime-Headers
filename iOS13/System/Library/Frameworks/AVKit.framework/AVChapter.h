/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface AVChapter : NSObject <NSCopying> {

	UIImage* _image;
	/*^block*/id _imageBlock;
	double _startTime;
	double _duration;
	unsigned long long _number;
	NSString* _title;

}

@property (readonly) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long number;              //@synthesize number=_number - In the implementation block
@property (copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (readonly) UIImage * image;                        //@synthesize image=_image - In the implementation block
+(void)initialize;
+(id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(/*^block*/id)arg5 ;
+(id)chapterAtTime:(double)arg1 inChapters:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(double)duration;
-(UIImage *)image;
-(unsigned long long)number;
-(double)startTime;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(/*^block*/id)arg5 ;
@end

