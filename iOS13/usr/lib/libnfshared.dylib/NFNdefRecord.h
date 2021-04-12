/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)type;
-(void)setType:(id)arg1;
-(NSData *)identifier;
-(void)setIdentifier:(id)arg1;
-(id)asData;
-(void)setPayload:(id)arg1;
-(NSData *)payload;
-(unsigned char)header;
-(void)setHeader:(unsigned char)arg1;
-(unsigned char)typeNameFormat;
-(id)decode;
-(id)initWithNDEFRecord:(id)arg1;
-(void)setTypeNameFormat:(unsigned char)arg1;
-(void)setShortRecord:(BOOL)arg1;
-(BOOL)messageBegin;
-(BOOL)messageEnd;
-(BOOL)chunked;
-(BOOL)shortRecord;
-(BOOL)isURIRecord;
-(void)setMessageBegin:(BOOL)arg1;
-(void)setMessageEnd:(BOOL)arg1;
-(void)setChunked:(BOOL)arg1;

@end

