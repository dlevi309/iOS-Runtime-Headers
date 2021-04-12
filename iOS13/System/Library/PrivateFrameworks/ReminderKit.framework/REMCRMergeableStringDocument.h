/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMReplicaIDSource, TTMergeableStringVersionedDocument, NSString, NSAttributedString;

@interface REMCRMergeableStringDocument : NSObject <NSCopying, NSSecureCoding> {

	REMReplicaIDSource* _replicaIDSource;
	TTMergeableStringVersionedDocument* _document;

}

@property (nonatomic,retain) REMReplicaIDSource * replicaIDSource;                       //@synthesize replicaIDSource=_replicaIDSource - In the implementation block
@property (nonatomic,retain) TTMergeableStringVersionedDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) NSAttributedString * attributedString; 
+(BOOL)supportsSecureCoding;
+(id)documentFromSerializedData:(id)arg1 replicaIDSource:(id)arg2 forKey:(id)arg3 ofObjectID:(id)arg4 ;
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setDocument:(TTMergeableStringVersionedDocument *)arg1 ;
-(TTMergeableStringVersionedDocument *)document;
-(id)serializedData;
-(id)initWithReplicaIDSource:(id)arg1 string:(id)arg2 ;
-(id)mutableDocument;
-(id)initWithReplicaIDSource:(id)arg1 document:(id)arg2 ;
-(REMReplicaIDSource *)replicaIDSource;
-(id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id*)arg3 ;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(id)mergedWithDocument:(id)arg1 error:(id*)arg2 ;
@end

