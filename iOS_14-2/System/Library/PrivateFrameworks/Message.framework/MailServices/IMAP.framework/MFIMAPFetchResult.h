/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


@interface MFIMAPFetchResult : NSObject {

	int _itemType;
	unsigned long long _modSequenceNumber;
	SCD_Union_MF9 _typeSpecific;

}
-(void)setUid:(unsigned)arg1 ;
-(id)initWithType:(int)arg1 ;
-(void)setSection:(id)arg1 ;
-(unsigned)uid;
-(unsigned long long)modSequenceNumber;
-(void)setModSequenceNumber:(unsigned long long)arg1 ;
-(id)section;
-(unsigned)encoding;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)setStartOffset:(unsigned long long)arg1 ;
-(id)description;
-(id)fetchData;
-(int)type;
-(id)envelope;
-(unsigned long long)startOffset;
-(unsigned long long)messageFlags;
-(unsigned long long)uniqueRemoteId;
-(void)setUniqueRemoteId:(unsigned long long)arg1 ;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(void)dealloc;
-(void)setFlagsArray:(id)arg1 ;
-(id)internalDate;
-(id)customFlagsArray;
-(id)flagsArray;
-(id)bodyStructure;
-(void)setEnvelope:(id)arg1 ;
-(void)setInternalDate:(id)arg1 ;
-(void)setFetchData:(id)arg1 ;
-(void)setBodyStructure:(id)arg1 ;
-(void)setCustomFlagsArray:(id)arg1 ;
@end

