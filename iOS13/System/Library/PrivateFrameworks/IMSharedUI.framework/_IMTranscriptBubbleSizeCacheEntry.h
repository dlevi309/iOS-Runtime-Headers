/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _IMTranscriptBubbleSizeCacheEntry : NSObject <NSCopying> {

	double _maximumWidth;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double minimumWidth; 
@property (assign,nonatomic) double maximumWidth;                //@synthesize maximumWidth=_maximumWidth - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(double)maximumWidth;
-(double)minimumWidth;
-(void)setMaximumWidth:(double)arg1 ;
-(id)initWithSize:(CGSize)arg1 maximumWidth:(double)arg2 ;
@end

