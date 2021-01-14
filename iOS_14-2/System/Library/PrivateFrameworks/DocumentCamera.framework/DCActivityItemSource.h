/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKit/UIActivityItemSourceAttachment.h>
#import <UIKit/UIActivityItemSource.h>

@class ICDocCamDocumentInfoCollection, NSString;

@interface DCActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource> {

	ICDocCamDocumentInfoCollection* _docInfoCollection;

}

@property (assign,nonatomic,__weak) ICDocCamDocumentInfoCollection * docInfoCollection;              //@synthesize docInfoCollection=_docInfoCollection - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentTypeUTI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(NSString *)attachmentTypeUTI;
-(ICDocCamDocumentInfoCollection *)docInfoCollection;
-(id)initWithDocumentInfoCollection:(id)arg1 ;
-(void)setDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg1 ;
@end

