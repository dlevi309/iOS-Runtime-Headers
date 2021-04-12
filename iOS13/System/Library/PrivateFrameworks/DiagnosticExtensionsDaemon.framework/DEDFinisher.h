/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

