/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <libobjc.A.dylib/NFNdefRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface NFNdefRecordInternal : NSObject <NFNdefRecord, NSSecureCoding> {

	unsigned char _firstOctet;
	NSData* _identifier;
	NSData* _type;
	NSData* _payload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned char header; 
@property (assign,nonatomic) BOOL messageBegin; 
@property (assign,nonatomic) BOOL messageEnd; 
@property (assign,nonatomic) BOOL shortRecord; 
@property (assign,nonatomic) BOOL chunked; 
@property (assign,nonatomic) unsigned char typeNameFormat; 
@property (nonatomic,retain) NSData * type; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,retain) NSData * identifier; 
+(BOOL)supportsSecureCoding;
+(id)recordsFromBytes:(const void*)arg1 length:(unsigned)arg2 ;
+(BOOL)parseRecordUsingScanner:(NFDataScanner*)arg1 header:(char*)arg2 type:(id*)arg3 identifier:(id*)arg4 payload:(id*)arg5 ;
+(id)dataFromRecord:(id)arg1 ;
+(id)decodeFromRecord:(id)arg1 ;
+(id)_decodeTextRecord:(id)arg1 ;
+(id)_decodeURIRecord:(id)arg1 ;
+(id)recordsWithTNF:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5 outError:(unsigned*)arg6 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSData *)type;
-(void)setType:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(id)asData;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(unsigned char)header;
-(void)setHeader:(unsigned char)arg1 ;
-(unsigned char)typeNameFormat;
-(id)decode;
-(id)initWithNDEFRecord:(id)arg1 ;
-(void)setTypeNameFormat:(unsigned char)arg1 ;
-(void)setShortRecord:(BOOL)arg1 ;
-(void)_setIdLengthPresent:(BOOL)arg1 ;
-(BOOL)messageBegin;
-(BOOL)messageEnd;
-(BOOL)chunked;
-(BOOL)shortRecord;
-(BOOL)isURIRecord;
-(void)setMessageBegin:(BOOL)arg1 ;
-(void)setMessageEnd:(BOOL)arg1 ;
-(void)setChunked:(BOOL)arg1 ;
-(BOOL)_idLengthPresent;
-(id)initWithHeader:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 ;
@end

