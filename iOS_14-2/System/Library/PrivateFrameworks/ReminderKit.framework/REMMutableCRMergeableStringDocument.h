/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(REMReplicaIDSource *)replicaIDSource;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(void)setReplicaManagerProvider:(id<REMReplicaManagerProviding>)arg1 ;
-(void)setDocument:(TTMergeableStringVersionedDocument *)arg1 ;
-(id)initWithReplicaIDSource:(id)arg1 ;
-(id)wipeAndReplaceWithString:(id)arg1 ;
-(TTMergeableStringVersionedDocument *)document;
-(id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(id)arg2 ;
-(id)immutableDocument;
-(void)_test_insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(REMReplicaIDHelper *)replicaIDHelper;
-(void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1 ;
-(void)setReplicaIDHelper:(REMReplicaIDHelper *)arg1 ;
-(TTMergeableAttributedString *)mergeableString;
-(id<REMReplicaManagerProviding>)replicaManagerProvider;
@end

