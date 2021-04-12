/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextGraphicsContextInternal.h>

@class NSString;

@interface _NSCGTextGraphicsContext : NSObject <NSTextGraphicsContextInternal> {

	CGContextRef _context;

}

@property (readonly) CGContextRef CGContext; 
@property (getter=isFlipped,readonly) BOOL flipped; 
@property (getter=isDrawingToScreen,readonly) BOOL drawingToScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graphicsContextForApplicationFrameworkContext:(long long)arg1 ;
-(BOOL)isDrawingToScreen;
-(BOOL)isFlipped;
-(CGContextRef)CGContext;
-(void)saveGraphicsState;
-(void)restoreGraphicsState;
-(id)initWithCGContext:(CGContextRef)arg1 ;
-(void)dealloc;
@end

