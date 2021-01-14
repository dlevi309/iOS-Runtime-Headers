/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)documents;
-(void)dismissModal;
-(void)removeDocument:(id)arg1;
-(void)popToDocument:(id)arg1;
-(void)popDocument;
-(void)popToRootDocument;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)presentModal:(id)arg1 :(id)arg2;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3;
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
-(NSArray *)documents;
-(void)dismissModal;
-(void)removeDocument:(id)arg1 ;
-(void)popToDocument:(id)arg1 ;
-(void)popDocument;
-(void)popToRootDocument;
-(id<IKAppNavigationController>)navigationControllerDelegate;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)_makeAppDocumentWithDocument:(id)arg1 ;
-(void)_migrateMediaControllerFromDocument:(id)arg1 toDocument:(id)arg2 ;
-(void)presentModal:(id)arg1 :(id)arg2 ;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)setDocuments:(id)arg1 :(id)arg2 ;
-(NSString *)OPTION_RETAIN_CONTEXT;
@end

