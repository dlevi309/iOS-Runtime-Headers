/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDocumentControllerContainer.h>

@protocol SXDocumentControllerContainer <SXDocumentControllerProvider>
@required
-(void)registerDocumentController:(id)arg1;

@end


@class SXDocumentController, NSString;

@interface SXDocumentControllerContainer : NSObject <SXDocumentControllerContainer> {

	SXDocumentController* _documentController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXDocumentController * documentController;              //@synthesize documentController=_documentController - In the implementation block
-(SXDocumentController *)documentController;
-(void)registerDocumentController:(id)arg1 ;
@end

