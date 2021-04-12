/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)maximumWidth;
-(double)minimumWidth;
-(void)setMaximumWidth:(double)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSize:(CGSize)arg1 maximumWidth:(double)arg2 ;
@end

