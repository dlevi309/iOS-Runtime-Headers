/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSModalDocumentController.h>
@class NSArray;


@protocol SKUIJSModalDocumentController <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@required
-(NSArray *)documents;
-(void)popToDocument:(id)arg1;
-(void)popDocument;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;

@end


@class NSArray, SKUIModalDocumentController;

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController> {

	SKUIModalDocumentController* _modalDocumentController;

}

@property (__weak,readonly) SKUIModalDocumentController * modalDocumentController; 
@property (nonatomic,retain,readonly) NSArray * documents; 
-(NSArray *)documents;
-(void)popToDocument:(id)arg1 ;
-(void)popDocument;
-(id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2 ;
-(SKUIModalDocumentController *)modalDocumentController;
-(id)_adjustedOptionsWithOptions:(id)arg1 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
@end

