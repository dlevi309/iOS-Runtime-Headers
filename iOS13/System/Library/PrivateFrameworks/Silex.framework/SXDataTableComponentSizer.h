/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentSizer.h>
#import <libobjc.A.dylib/SXDataTableComponentControllerDataSource.h>

@protocol SXTextComponentLayoutHosting, SXLayoutContext;
@class SXDataTableLayouter, SXDataTableComponentController, NSString;

@interface SXDataTableComponentSizer : SXComponentSizer <SXDataTableComponentControllerDataSource> {

	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	SXDataTableLayouter* _layouter;
	SXDataTableComponentController* _dataTableComponentController;
	id<SXLayoutContext> _currentLayoutContext;

}

@property (nonatomic,__weak,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;              //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,retain) SXDataTableLayouter * layouter;                                                    //@synthesize layouter=_layouter - In the implementation block
@property (nonatomic,retain) SXDataTableComponentController * dataTableComponentController;                     //@synthesize dataTableComponentController=_dataTableComponentController - In the implementation block
@property (nonatomic,retain) id<SXLayoutContext> currentLayoutContext;                                          //@synthesize currentLayoutContext=_currentLayoutContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(id)tableStyleForComponent:(id)arg1 ;
-(SXDataTableComponentController *)dataTableComponentController;
-(SXDataTableLayouter *)layouter;
-(void)setCurrentLayoutContext:(id<SXLayoutContext>)arg1 ;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(id<SXLayoutContext>)currentLayoutContext;
-(id)componentForDataTableComponentController:(id)arg1 ;
-(id)DOMObjectProviderForDataTableComponentController:(id)arg1 ;
-(id)textComponentLayoutHostingForDataTableComponentController:(id)arg1 ;
-(id)documentColumnLayoutForDataTableComponentController:(id)arg1 ;
-(id)contentSizeCategoryForDataTableComponentController:(id)arg1 ;
-(id)unitConverterForDataTableComponentController:(id)arg1 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 textComponentLayoutHosting:(id)arg6 textSourceFactory:(id)arg7 recordValueTransformerFactory:(id)arg8 ;
-(void)setLayouter:(SXDataTableLayouter *)arg1 ;
-(void)setDataTableComponentController:(SXDataTableComponentController *)arg1 ;
@end

