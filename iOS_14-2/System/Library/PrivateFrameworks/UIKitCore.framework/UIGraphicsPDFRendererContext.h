/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererContext.h>

@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext {

	BOOL _inPage;
	CGRect _documentBounds;
	CGRect _pageBounds;

}

@property (assign) CGRect documentBounds;                            //@synthesize documentBounds=_documentBounds - In the implementation block
@property (assign) CGRect pageBounds;                                //@synthesize pageBounds=_pageBounds - In the implementation block
@property (assign) BOOL inPage;                                      //@synthesize inPage=_inPage - In the implementation block
@property (nonatomic,readonly) CGRect pdfContextBounds; 
-(void)beginPageWithBounds:(CGRect)arg1 pageInfo:(id)arg2 ;
-(CGRect)pdfContextBounds;
-(void)setInPage:(BOOL)arg1 ;
-(void)setDocumentBounds:(CGRect)arg1 ;
-(CGRect)pageBounds;
-(void)setURL:(id)arg1 forRect:(CGRect)arg2 ;
-(void)updateAuxInfo:(id)arg1 ;
-(void)setPageBounds:(CGRect)arg1 ;
-(CGRect)documentBounds;
-(void)beginPage;
-(BOOL)inPage;
-(void)addDestinationWithName:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)setDestinationWithName:(id)arg1 forRect:(CGRect)arg2 ;
@end

