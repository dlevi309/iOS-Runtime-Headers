/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <ReminderKit/TTVersionedDocument.h>
#import <libobjc.A.dylib/REMReplicaClockProviding.h>

@class TTMergeableAttributedString, NSString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument <REMReplicaClockProviding> {

	TTMergeableAttributedString* _mergeableString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TTMergeableAttributedString * mergeableString;              //@synthesize mergeableString=_mergeableString - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(id)initWithArchive:(const Document*)arg1 andReplicaID:(id)arg2 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(void)setMergeableString:(TTMergeableAttributedString *)arg1 ;
-(id)clockElementListForReplicaUUID:(id)arg1 ;
-(id)initWithMergeableString:(id)arg1 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(BOOL)rem_isEqual:(id)arg1 ;
-(id)rem_copyWithReplicaIDForNewEdits:(id)arg1 ;
-(unsigned long long)mergeWithStringVersionedDocument:(id)arg1 ;
-(TTMergeableAttributedString *)mergeableString;
@end

