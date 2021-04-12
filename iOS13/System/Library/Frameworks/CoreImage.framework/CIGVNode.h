/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <GraphVisualizer/GVNode.h>

@class NSMutableArray, CIGVGraph;

@interface CIGVNode : GVNode {

	void* node;
	CGRect extent;
	CGSize titleSize;
	CGSize labelSize;
	CGSize imagesSize;
	CGSize roisSize;
	CGSize badgeSize;
	CGSize contentSize;
	NSMutableArray* images;
	NSMutableArray* rois;
	int color;
	int shape;
	CIGVGraph* graph;
	CFStringRef title;
	CFStringRef label;

}

@property (assign,nonatomic) CIGVGraph * graph; 
@property (readonly) void* node; 
@property (readonly) CGRect extent; 
@property (assign,nonatomic) int shape; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) CFStringRef title; 
@property (nonatomic,readonly) CGRect titleFrame; 
@property (nonatomic,readonly) CGRect badgeFrame; 
@property (assign,nonatomic) CFStringRef label; 
@property (nonatomic,readonly) CGRect labelFrame; 
@property (nonatomic,readonly) CFArrayRef images; 
@property (nonatomic,readonly) CGRect imagesFrame; 
@property (nonatomic,readonly) CFArrayRef rois; 
@property (nonatomic,readonly) CGRect roisFrame; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) CGSize contentInsertSize; 
@property (nonatomic,readonly) CGSize contentCornerSize; 
+(CFDictionaryRef)textAttributesForTitle;
+(CFDictionaryRef)textAttributesForLabel;
-(id)init;
-(void)dealloc;
-(id)description;
-(CFStringRef)title;
-(void)setTitle:(CFStringRef)arg1 ;
-(void*)node;
-(CGRect)extent;
-(int)color;
-(void)setLabel:(CFStringRef)arg1 ;
-(int)shape;
-(void)updateSize;
-(void)updateBadgeSize;
-(void)updateContentSize;
-(CGSize)contentInsertSize;
-(CFStringRef)label;
-(id)initWithCINode:(void*)arg1 extent:(CGRect)arg2 ;
-(CFArrayRef)images;
-(CFArrayRef)rois;
-(void)setShape:(int)arg1 ;
-(void)setColor:(int)arg1 ;
-(void)addImage:(CGImageRef)arg1 ;
-(void)addRoi:(CGRect)arg1 ;
-(CGRect)titleFrame;
-(CGRect)badgeFrame;
-(CGSize)contentCornerSize;
-(CGRect)labelFrame;
-(CGRect)imagesFrame;
-(CGRect)roisFrame;
-(CGRect)contentFrame;
-(CIGVGraph *)graph;
-(void)setGraph:(CIGVGraph *)arg1 ;
@end

