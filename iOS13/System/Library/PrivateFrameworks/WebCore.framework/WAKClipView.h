/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>

@class WAKView;

@interface WAKClipView : WAKView {

	BOOL _copiesOnScroll;
	WAKView* _documentView;

}

@property (nonatomic,readonly) WAKView * documentView;              //@synthesize documentView=_documentView - In the implementation block
@property (assign,nonatomic) BOOL copiesOnScroll;                   //@synthesize copiesOnScroll=_copiesOnScroll - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(WAKView *)documentView;
-(void)setCopiesOnScroll:(BOOL)arg1 ;
-(BOOL)copiesOnScroll;
-(CGRect)documentVisibleRect;
-(void)_setDocumentView:(id)arg1 ;
@end

