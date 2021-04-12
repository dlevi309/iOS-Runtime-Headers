/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/IKAppNavigationController.h>
#import <libobjc.A.dylib/SKUIDOMFeature.h>

@class IKJSNavigationDocument, SKUINavigationDocumentController, NSMutableArray, IKAppContext, NSString;

@interface SKUIJSDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, SKUIDOMFeature> {

	IKJSNavigationDocument* _jsNavigationDocument;
	SKUINavigationDocumentController* _navigationDocumentController;
	NSMutableArray* _stackItems;
	IKAppContext* _appContext;
	NSString* _featureName;

}

@property (nonatomic,retain) SKUINavigationDocumentController * navigationDocumentController;              //@synthesize navigationDocumentController=_navigationDocumentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                                //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                           //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
+(id)possibleFeatureNames;
-(void)clear;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(id)documents;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)setNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(SKUINavigationDocumentController *)navigationDocumentController;
@end

