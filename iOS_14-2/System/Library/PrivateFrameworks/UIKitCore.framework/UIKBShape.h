/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying> {

	UIKBGeometry* m_geometry;
	CGRect m_frame;
	CGRect m_paddedFrame;
	unsigned long long m_concaveCorner;
	CGSize m_concaveCornerOffset;
	unsigned long long m_uid;
	BOOL m_scaled;
	UIKBShape* m_originalShape;

}

@property (assign,nonatomic) BOOL scaled; 
@property (nonatomic,retain) UIKBShape * originalShape; 
@property (nonatomic,retain) UIKBGeometry * geometry; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect paddedFrame; 
@property (assign,nonatomic) unsigned long long concaveCorner; 
@property (assign,nonatomic) CGSize concaveCornerOffset; 
@property (nonatomic,readonly) unsigned long long uid; 
+(id)shape;
+(id)shapeByCombining:(id)arg1 withShape:(id)arg2 ;
+(id)shapeByResizingShape:(id)arg1 byAmount:(CGSize)arg2 ;
-(UIKBGeometry *)geometry;
-(CGRect)paddedFrame;
-(unsigned long long)uid;
-(void)scaleIfNeeded:(double)arg1 onlyYAxis:(BOOL)arg2 ;
-(id)init;
-(void)setScaled:(BOOL)arg1 ;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(id)initWithGeometry:(id)arg1 frame:(CGRect)arg2 paddedFrame:(CGRect)arg3 ;
-(BOOL)shouldUseGeometry;
-(void)setConcaveCornerOffset:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(UIKBShape *)originalShape;
-(void)scaleWidth:(double)arg1 ;
-(void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 ;
-(CGRect)_scaleRect:(CGRect)arg1 inYAxis:(BOOL)arg2 ;
-(id)description;
-(void)setConcaveCorner:(unsigned long long)arg1 ;
-(CGSize)concaveCornerOffset;
-(void)setFrame:(CGRect)arg1 ;
-(void)makeLikeOther:(id)arg1 ;
-(void)setGeometry:(UIKBGeometry *)arg1 ;
-(id)initWithGeometry:(id)arg1 frame:(CGRect)arg2 paddedFrame:(CGRect)arg3 concaveCorner:(unsigned long long)arg4 concaveCornerOffset:(CGSize)arg5 ;
-(void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)concaveCorner;
-(BOOL)isEmpty;
-(void)setConcaveCornerSize:(CGSize)arg1 ;
-(void)addRectFrom:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 absoluteOriginFactors:(BOOL)arg6 ;
-(void)setOriginalShape:(UIKBShape *)arg1 ;
-(BOOL)scaled;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

