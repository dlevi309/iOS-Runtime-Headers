/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)visualDescription;
-(NSArray *)frames;
-(id)description;
-(id)_normalizeFrames:(id)arg1 ;
-(id)initWithFrames:(id)arg1 ;
-(double)outputLineWidth;
-(id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2 ;
-(CGRect)scaledRectForRect:(CGRect)arg1 scaleSize:(CGSize)arg2 ;
-(id)renderedLines;
@end

