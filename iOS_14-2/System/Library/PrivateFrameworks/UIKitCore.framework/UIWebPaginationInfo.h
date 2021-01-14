/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)scaleFactor;
-(CGSize)layoutSize;
-(unsigned long long)pageCount;
-(id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(CGSize)arg3 pageRects:(id)arg4 ;
-(void)setWebDocumentView:(UIWebDocumentView *)arg1 ;
-(id)documentView;
-(double)lastPageHeight;
-(UIWebDocumentView *)webDocumentView;
-(id)pageRects;
-(CGSize)sizeForPageAtIndex:(long long)arg1 ;
-(void)dealloc;
@end

