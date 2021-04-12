/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

@class NSData;


@protocol NFNdefRecord <NSObject>
@property (assign,nonatomic) unsigned char header; 
@property (assign,nonatomic) BOOL messageBegin; 
@property (assign,nonatomic) BOOL messageEnd; 
@property (assign,nonatomic) BOOL shortRecord; 
@property (assign,nonatomic) BOOL chunked; 
@property (assign,nonatomic) unsigned char typeNameFormat; 
@property (nonatomic,retain) NSData * type; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,retain) NSData * identifier; 
@required
-(void)setPayload:(id)arg1;
-(void)setHeader:(unsigned char)arg1;
-(unsigned char)header;
-(void)setType:(id)arg1;
-(NSData *)payload;
-(id)decode;
-(id)asData;
-(BOOL)chunked;
-(NSData *)type;
-(unsigned char)typeNameFormat;
-(void)setIdentifier:(id)arg1;
-(NSData *)identifier;
-(id)initWithNDEFRecord:(id)arg1;
-(void)setTypeNameFormat:(unsigned char)arg1;
-(void)setShortRecord:(BOOL)arg1;
-(BOOL)messageBegin;
-(BOOL)messageEnd;
-(BOOL)shortRecord;
-(BOOL)isURIRecord;
-(void)setMessageBegin:(BOOL)arg1;
-(void)setMessageEnd:(BOOL)arg1;
-(void)setChunked:(BOOL)arg1;

@end

