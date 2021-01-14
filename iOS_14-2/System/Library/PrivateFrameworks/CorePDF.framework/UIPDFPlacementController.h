/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIPDFPageView *)pageView;
-(void)shift:(double)arg1 ;
-(id)viewAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setPageView:(UIPDFPageView *)arg1 ;
-(id)initWithAnnotations:(id)arg1 viewSize:(CGSize)arg2 ;
-(void)layoutViews:(double)arg1 ;
-(CGRect)boundsForObjectAtIndex:(unsigned long long)arg1 ;
-(double)yForObjectAtIndex:(unsigned long long)arg1 ;
@end

