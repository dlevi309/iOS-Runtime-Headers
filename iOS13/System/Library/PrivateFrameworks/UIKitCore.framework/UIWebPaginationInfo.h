/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol WebDocumentView;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSObject, NSArray, UIWebDocumentView;

@interface UIWebPaginationInfo : NSObject {

	NSObject*<WebDocumentView> _documentView;
	double _scaleFactor;
	CGSize _layoutSize;
	NSArray* _pageRects;
	UIWebDocumentView* _webDocumentView;

}

@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) double lastPageHeight; 
@property (nonatomic,retain) UIWebDocumentView * webDocumentView;              //@synthesize webDocumentView=_webDocumentView - In the implementation block
-(void)dealloc;
-(double)scaleFactor;
-(CGSize)layoutSize;
-(unsigned long long)pageCount;
-(id)documentView;
-(CGSize)sizeForPageAtIndex:(long long)arg1 ;
-(id)pageRects;
-(id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(CGSize)arg3 pageRects:(id)arg4 ;
-(void)setWebDocumentView:(UIWebDocumentView *)arg1 ;
-(double)lastPageHeight;
-(UIWebDocumentView *)webDocumentView;
@end

