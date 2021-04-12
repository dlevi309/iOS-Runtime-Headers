/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)_supportsContextReuse;
+(CGContextRef)_contextWithFormat:(id)arg1 renderer:(id)arg2 ;
+(void)_destroyCGContext:(CGContextRef)arg1 withRenderer:(id)arg2 ;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(Class)rendererContextClass;
-(UIGraphicsRendererFormat *)format;
-(id)init;
-(id)initWithBounds:(CGRect)arg1 ;
-(CGContextRef)_dequeueContextForReuse;
-(id)initWithFormat:(id)arg1 bounds:(CGRect)arg2 ;
-(void)pushContext:(id)arg1 ;
-(void)_enqueueContextForReuse:(CGContextRef)arg1 ;
-(BOOL)runDrawingActions:(/*^block*/id)arg1 completionActions:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)_configureReuseState;
-(void)_prepareContextForReuse:(CGContextRef)arg1 ;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(BOOL)runDrawingActions:(/*^block*/id)arg1 completionActions:(/*^block*/id)arg2 format:(id)arg3 error:(id*)arg4 ;
-(void)popContext:(id)arg1 ;
-(BOOL)allowsImageOutput;
@end

