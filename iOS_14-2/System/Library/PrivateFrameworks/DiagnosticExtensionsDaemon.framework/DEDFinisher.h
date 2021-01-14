/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@protocol DEDFinisher <NSObject>
@optional
-(void)cleanup;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
-(void)didCancelCollectionOnExtension:(id)arg1;
-(void)didCollectAttachmentGroup:(id)arg1;
-(void)didAdoptAttachmentGroup:(id)arg1;
-(void)didFinishAllCollections;

@required
-(id)initWithConfiguration:(id)arg1 session:(id)arg2;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2;

@end

