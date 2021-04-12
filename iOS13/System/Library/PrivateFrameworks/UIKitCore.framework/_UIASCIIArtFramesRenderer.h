/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIASCIIArtFramesRenderer : NSObject {

	NSArray* _frames;
	double _outputLineWidth;

}

@property (nonatomic,readonly) NSArray * frames; 
@property (nonatomic,readonly) double outputLineWidth; 
-(id)description;
-(id)initWithFrames:(id)arg1 ;
-(id)visualDescription;
-(id)_normalizeFrames:(id)arg1 ;
-(id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2 ;
-(id)renderedLines;
-(double)outputLineWidth;
-(CGRect)scaledRectForRect:(CGRect)arg1 scaleSize:(CGSize)arg2 ;
-(NSArray *)frames;
@end

