/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) SXDocumentController * documentController;              //@synthesize documentController=_documentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerDocumentController:(id)arg1 ;
-(SXDocumentController *)documentController;
@end

