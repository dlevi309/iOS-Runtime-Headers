/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/ICDocumentAction.h>

@class WFFileRepresentation;

@interface ICPostToInstagramAction : ICDocumentAction {

	WFFileRepresentation* _instagramRepresentation;

}

@property (nonatomic,retain) WFFileRepresentation * instagramRepresentation;              //@synthesize instagramRepresentation=_instagramRepresentation - In the implementation block
-(void)dealloc;
-(id)inputContentClasses;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(void)appDidResume:(id)arg1 ;
-(void)shareAsALAssetWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(void)shareAsImageFileWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(WFFileRepresentation *)instagramRepresentation;
-(void)setInstagramRepresentation:(WFFileRepresentation *)arg1 ;
@end

