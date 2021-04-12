/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/CIGVRenderer.h>

@class NSURL, NSString;

@interface DOTRenderer : NSObject <CIGVRenderer> {

	_sFILE* file;
	NSURL* fileURL;
	NSString* fileTitle;
	BOOL drawEdgesFirst;
	int direction;
	CGSize separation;

}

@property (assign) int direction; 
@property (assign) CGSize separation; 
@property (assign) BOOL drawEdgesFirst; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)direction;
-(void)setFileURL:(id)arg1 ;
-(id)init;
-(void)setDirection:(int)arg1 ;
-(void)drawNode:(id)arg1 ;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)drawEdge:(id)arg1 withPath:(id)arg2 ;
-(CGSize)separation;
-(BOOL)drawEdgesFirst;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(void)setSeparation:(CGSize)arg1 ;
-(void)setDrawEdgesFirst:(BOOL)arg1 ;
-(void)dealloc;
@end

