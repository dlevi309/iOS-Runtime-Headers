/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject {

	NSMutableArray* _popups;
	CGSize _viewSize;
	UIPDFPageView* pageView;

}

@property (assign,nonatomic) UIPDFPageView * pageView; 
-(void)dealloc;
-(id)viewAtIndex:(unsigned long long)arg1 ;
-(UIPDFPageView *)pageView;
-(void)setPageView:(UIPDFPageView *)arg1 ;
-(id)initWithAnnotations:(id)arg1 viewSize:(CGSize)arg2 ;
-(void)layoutViews:(double)arg1 ;
-(CGRect)boundsForObjectAtIndex:(unsigned long long)arg1 ;
-(double)yForObjectAtIndex:(unsigned long long)arg1 ;
-(void)shift:(double)arg1 ;
@end

