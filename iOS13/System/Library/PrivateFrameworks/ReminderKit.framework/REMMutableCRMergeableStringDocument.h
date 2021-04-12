/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMReplicaIDHelperOwner.h>

@protocol REMReplicaManagerProviding;
@class REMReplicaIDSource, TTMergeableStringVersionedDocument, REMReplicaIDHelper, TTMergeableAttributedString, NSString;

@interface REMMutableCRMergeableStringDocument : NSObject <REMReplicaIDHelperOwner> {

	id<REMReplicaManagerProviding> _replicaManagerProvider;
	REMReplicaIDSource* _replicaIDSource;
	TTMergeableStringVersionedDocument* _document;
	REMReplicaIDHelper* _replicaIDHelper;

}

@property (nonatomic,retain) REMReplicaIDSource * replicaIDSource;                               //@synthesize replicaIDSource=_replicaIDSource - In the implementation block
@property (nonatomic,retain) TTMergeableStringVersionedDocument * document;                      //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) REMReplicaIDHelper * replicaIDHelper;                               //@synthesize replicaIDHelper=_replicaIDHelper - In the implementation block
@property (nonatomic,retain) id<REMReplicaManagerProviding> replicaManagerProvider;              //@synthesize replicaManagerProvider=_replicaManagerProvider - In the implementation block
@property (nonatomic,readonly) TTMergeableAttributedString * mergeableString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDocument:(TTMergeableStringVersionedDocument *)arg1 ;
-(TTMergeableStringVersionedDocument *)document;
-(id)initWithReplicaIDSource:(id)arg1 ;
-(id<REMReplicaManagerProviding>)replicaManagerProvider;
-(void)setReplicaManagerProvider:(id<REMReplicaManagerProviding>)arg1 ;
-(id)wipeAndReplaceWithString:(id)arg1 ;
-(REMReplicaIDSource *)replicaIDSource;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(REMReplicaIDHelper *)replicaIDHelper;
-(void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1 ;
-(void)setReplicaIDHelper:(REMReplicaIDHelper *)arg1 ;
-(TTMergeableAttributedString *)mergeableString;
-(id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(id)arg2 ;
-(id)immutableDocument;
-(void)_test_insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

