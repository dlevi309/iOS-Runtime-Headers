/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCopiesOnScroll:(BOOL)arg1 ;
-(BOOL)copiesOnScroll;
-(CGRect)documentVisibleRect;
-(void)_setDocumentView:(id)arg1 ;
-(WAKView *)documentView;
-(void)dealloc;
@end

