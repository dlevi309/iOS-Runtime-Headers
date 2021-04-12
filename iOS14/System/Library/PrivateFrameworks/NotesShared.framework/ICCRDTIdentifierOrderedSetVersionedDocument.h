/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <ReminderKit/TTVersionedDocument.h>

@class NSUUID, CROrderedSet, CRDocument;

@interface ICCRDTIdentifierOrderedSetVersionedDocument : TTVersionedDocument {

	NSUUID* _replica;
	CROrderedSet* _orderedSet;
	CRDocument* _document;

}

@property (nonatomic,retain) CROrderedSet * orderedSet;              //@synthesize orderedSet=_orderedSet - In the implementation block
@property (readonly) CRDocument * document;                          //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSUUID * replica;                     //@synthesize replica=_replica - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(void)setOrderedSet:(CROrderedSet *)arg1 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(NSUUID *)replica;
-(CRDocument *)document;
-(unsigned long long)mergeWithIdentifierOrderedSetVersionedDocument:(id)arg1 ;
-(CROrderedSet *)orderedSet;
@end

