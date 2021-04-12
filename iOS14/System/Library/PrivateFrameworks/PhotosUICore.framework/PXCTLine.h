/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, PXCTFrame, NSAttributedString, NSShadow;

@interface PXCTLine : NSObject {

	BOOL _prepared;
	double _width;
	CGRect _imageBounds;
	BOOL _truncated;
	BOOL _endOfString;
	NSString* _string;
	const CTLineRef _line;
	PXCTFrame* _frame;
	NSAttributedString* _referenceAttributedString;
	double _ascent;
	double _descent;
	CGContextRef _context;
	NSShadow* _shadow;
	NSRange _stringRange;
	CGPoint _origin;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) const CTLineRef line;                                        //@synthesize line=_line - In the implementation block
@property (nonatomic,readonly) CGPoint origin;                                              //@synthesize origin=_origin - In the implementation block
@property (nonatomic,__weak,readonly) PXCTFrame * frame;                                    //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) NSAttributedString * referenceAttributedString;              //@synthesize referenceAttributedString=_referenceAttributedString - In the implementation block
@property (nonatomic,readonly) double ascent;                                               //@synthesize ascent=_ascent - In the implementation block
@property (nonatomic,readonly) double descent;                                              //@synthesize descent=_descent - In the implementation block
@property (nonatomic,readonly) CGContextRef context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow;                                           //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,readonly) NSRange stringRange;                                         //@synthesize stringRange=_stringRange - In the implementation block
@property (nonatomic,readonly) NSString * string;                                           //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double ascentPosition; 
@property (nonatomic,readonly) double baselinePosition; 
@property (nonatomic,readonly) double descentPosition; 
@property (nonatomic,readonly) CGPoint textPosition; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) CGRect imageBounds; 
@property (getter=isTruncated,nonatomic,readonly) BOOL truncated;                           //@synthesize truncated=_truncated - In the implementation block
@property (getter=isEndOfString,nonatomic,readonly) BOOL endOfString;                       //@synthesize endOfString=_endOfString - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform;                                 //@synthesize transform=_transform - In the implementation block
-(CGRect)contentBounds;
-(NSShadow *)shadow;
-(BOOL)isTruncated;
-(CGPoint)origin;
-(double)width;
-(id)init;
-(void)_transformBy:(CGAffineTransform)arg1 ;
-(PXCTFrame *)frame;
-(void)scaleBy:(double)arg1 ;
-(NSAttributedString *)referenceAttributedString;
-(CGContextRef)context;
-(void)draw;
-(CGAffineTransform)transform;
-(CGPoint)textPosition;
-(id)description;
-(BOOL)isEndOfString;
-(const CGPathRef)createPath;
-(double)baselinePosition;
-(NSString *)string;
-(void)translateVerticallyBy:(double)arg1 ;
-(double)descentPosition;
-(void)scaleVerticallyBy:(double)arg1 ;
-(void)translateHorizontallyBy:(double)arg1 ;
-(double)descent;
-(double)ascentPosition;
-(CGRect)imageBounds;
-(void)prepare;
-(id)initWithLine:(CTLineRef)arg1 origin:(CGPoint)arg2 frame:(id)arg3 referenceAttributedString:(id)arg4 truncated:(BOOL)arg5 ;
-(double)ascent;
-(const CTLineRef)line;
-(void)dealloc;
-(NSRange)stringRange;
@end

