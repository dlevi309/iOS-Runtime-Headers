/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSNavigationDocument.h>
@class NSArray, NSString;


@protocol IKJSNavigationDocument <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@property (readonly) NSString * OPTION_RETAIN_CONTEXT; 
@required
-(void)clear;
-(void)dismissModal;
-(void)popDocument;
-(void)popToDocument:(id)arg1;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1;
-(NSArray *)documents;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)presentModal:(id)arg1 :(id)arg2;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)setDocuments:(id)arg1 :(id)arg2;
-(NSString *)OPTION_RETAIN_CONTEXT;

@end


@protocol IKAppNavigationController;
@class NSArray, NSString;

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument> {

	SCD_Struct_IK10 _delegateSelectors;
	id<IKAppNavigationController> _navigationControllerDelegate;

}

@property (nonatomic,__weak,readonly) id<IKAppNavigationController> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,retain,readonly) NSArray * documents; 
@property (readonly) NSString * OPTION_RETAIN_CONTEXT; 
-(void)clear;
-(void)dismissModal;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(NSArray *)documents;
-(id<IKAppNavigationController>)navigationControllerDelegate;
-(id)_makeAppDocumentWithDocument:(id)arg1 ;
-(void)_migrateMediaControllerFromDocument:(id)arg1 toDocument:(id)arg2 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)presentModal:(id)arg1 :(id)arg2 ;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)setDocuments:(id)arg1 :(id)arg2 ;
-(NSString *)OPTION_RETAIN_CONTEXT;
@end

