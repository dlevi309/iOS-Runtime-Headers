/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <ReminderKit/TTVersionedDocument.h>

@class NSUUID, CRDocument, ICTable;

@interface ICTableVersionedDocument : TTVersionedDocument {

	NSUUID* _replica;
	CRDocument* _innerTableDocument;
	ICTable* _table;

}

@property (nonatomic,retain) ICTable * table;                      //@synthesize table=_table - In the implementation block
@property (readonly) CRDocument * innerTableDocument;              //@synthesize innerTableDocument=_innerTableDocument - In the implementation block
@property (nonatomic,readonly) NSUUID * replica;                   //@synthesize replica=_replica - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
+(id)tableDoc;
+(id)tableDocWithColumnCount:(unsigned long long)arg1 rowCount:(unsigned long long)arg2 ;
-(ICTable *)table;
-(void)setTable:(ICTable *)arg1 ;
-(NSUUID *)replica;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(void)setReplica:(NSUUID *)arg1 ;
-(CRDocument *)innerTableDocument;
-(unsigned long long)mergeWithTableVersionedDocument:(id)arg1 ;
@end

