/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)tableDocWithColumnCount:(unsigned long long)arg1 rowCount:(unsigned long long)arg2 ;
+(unsigned)minimumSupportedVersion;
+(id)tableDoc;
-(ICTable *)table;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(NSUUID *)replica;
-(void)setReplica:(NSUUID *)arg1 ;
-(void)setTable:(ICTable *)arg1 ;
-(CRDocument *)innerTableDocument;
-(unsigned long long)mergeWithTableVersionedDocument:(id)arg1 ;
@end

