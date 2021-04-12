/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <GraphVisualizer/GVNode.h>

@class NSMutableArray;

@interface CIGVNode : GVNode {

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
	CFStringRef title;
	CFStringRef label;

}

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
-(void)setShape:(int)arg1 ;
-(CGRect)contentFrame;
-(int)shape;
-(CFArrayRef)rois;
-(id)init;
-(int)color;
-(CGRect)titleFrame;
-(CGRect)extent;
-(void)setTitle:(CFStringRef)arg1 ;
-(void)addRoi:(CGRect)arg1 ;
-(id)description;
-(CGRect)labelFrame;
-(void)setColor:(int)arg1 ;
-(void)addImage:(CGImageRef)arg1 ;
-(CFArrayRef)images;
-(void)updateContentSize;
-(void)setLabel:(CFStringRef)arg1 ;
-(CGRect)roisFrame;
-(void)updateSize;
-(void)updateBadgeSize;
-(CGSize)contentInsertSize;
-(CGRect)badgeFrame;
-(CGSize)contentCornerSize;
-(CGRect)imagesFrame;
-(id)initWithCINode:(void*)arg1 extent:(CGRect)arg2 ;
-(CFStringRef)label;
-(CFStringRef)title;
-(void)dealloc;
@end

