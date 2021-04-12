/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSModalDocumentController.h>
@class NSArray;


@protocol SKUIJSModalDocumentController <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@required
-(void)popDocument;
-(void)popToDocument:(id)arg1;
-(NSArray *)documents;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;

@end


@class NSArray, SKUIModalDocumentController;

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController> {

	SKUIModalDocumentController* _modalDocumentController;

}

@property (__weak,readonly) SKUIModalDocumentController * modalDocumentController; 
@property (nonatomic,retain,readonly) NSArray * documents; 
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(NSArray *)documents;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2 ;
-(SKUIModalDocumentController *)modalDocumentController;
-(id)_adjustedOptionsWithOptions:(id)arg1 ;
@end

