/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextGraphicsContextInternal.h>

@class NSString;

@interface _NSUIKitTextGraphicsContext : NSObject <NSTextGraphicsContextInternal>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CGContextRef CGContext; 
@property (getter=isFlipped,readonly) BOOL flipped; 
@property (getter=isDrawingToScreen,readonly) BOOL drawingToScreen; 
+(id)graphicsContextForApplicationFrameworkContext:(long long)arg1 ;
+(id)sharedContext;
-(BOOL)isFlipped;
-(CGContextRef)CGContext;
-(BOOL)isDrawingToScreen;
-(void)saveGraphicsState;
-(void)restoreGraphicsState;
@end

