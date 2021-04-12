/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIGraphicsRendererFormat, _UIReusePool;

@interface UIGraphicsRenderer : NSObject {

	UIGraphicsRendererFormat* _format;
	_UIReusePool* _reusePool;

}

@property (nonatomic,readonly) UIGraphicsRendererFormat * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL allowsImageOutput; 
+(Class)rendererContextClass;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
+(BOOL)_supportsContextReuse;
+(CGContextRef)_contextWithFormat:(id)arg1 renderer:(id)arg2 ;
+(void)_destroyCGContext:(CGContextRef)arg1 withRenderer:(id)arg2 ;
-(id)init;
-(UIGraphicsRendererFormat *)format;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(void)pushContext:(id)arg1 ;
-(void)popContext:(id)arg1 ;
-(BOOL)runDrawingActions:(/*^block*/id)arg1 completionActions:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)_prepareContextForReuse:(CGContextRef)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)allowsImageOutput;
-(BOOL)runDrawingActions:(/*^block*/id)arg1 completionActions:(/*^block*/id)arg2 format:(id)arg3 error:(id*)arg4 ;
-(CGContextRef)_dequeueContextForReuse;
-(void)_enqueueContextForReuse:(CGContextRef)arg1 ;
-(void)_configureReuseState;
-(id)initWithFormat:(id)arg1 bounds:(CGRect)arg2 ;
@end

