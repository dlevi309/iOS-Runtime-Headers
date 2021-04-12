/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFPageDrawProgressCallback.h>

@class PDFPageBackgroundManagerPrivate;

@interface PDFPageBackgroundManager : NSObject <PDFPageDrawProgressCallback> {

	PDFPageBackgroundManagerPrivate* _private;

}
-(void)dealloc;
-(void)cancel;
-(void)_update;
-(void)_cleanup;
-(id)initWithDelegate:(id)arg1 andRenderingProperties:(id)arg2 ;
-(void)updateActivePageIndex:(unsigned long long)arg1 ;
-(void)willForceUpdate;
-(void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2 ;
-(id)backgroundImageForPageIndex:(unsigned long long)arg1 withFoundQuality:(int*)arg2 ;
-(void)didInsertPageAtIndex:(unsigned long long)arg1 ;
-(void)didRemovePageAtIndex:(unsigned long long)arg1 ;
-(void)didSwapPageAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2 ;
-(void)_drawPageImage:(unsigned long long)arg1 forQuality:(int)arg2 ;
-(void)_shiftImagesAtIndex:(unsigned long long)arg1 downwards:(BOOL)arg2 ;
-(BOOL)_findPageIndexNeedingUpdate:(unsigned long long*)arg1 forQuality:(int*)arg2 ;
-(BOOL)_expectedQualityIndexForPageIndex:(unsigned long long)arg1 forQuality:(int*)arg2 ;
-(BOOL)drawProgressCallback;
-(void)forceSetBackgroundImage:(id)arg1 forPageIndex:(unsigned long long)arg2 ;
@end

