/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class DEWriter, DEReader, NSMutableData, NSData;

@interface DEMultipart : NSObject {

	BOOL _endOfPart;
	BOOL _endOfMessage;
	DEWriter* _writer;
	DEReader* _reader;
	NSMutableData* _searchBuffer;
	NSData* _nextPartData;
	NSData* _endOfPartData;
	NSData* _endOfMessageData;
	unsigned long long _maxEndSize;

}

@property (nonatomic,retain) DEWriter * writer;                          //@synthesize writer=_writer - In the implementation block
@property (nonatomic,retain) DEReader * reader;                          //@synthesize reader=_reader - In the implementation block
@property (nonatomic,retain) NSMutableData * searchBuffer;               //@synthesize searchBuffer=_searchBuffer - In the implementation block
@property (nonatomic,retain) NSData * nextPartData;                      //@synthesize nextPartData=_nextPartData - In the implementation block
@property (assign,nonatomic) BOOL endOfPart;                             //@synthesize endOfPart=_endOfPart - In the implementation block
@property (assign,nonatomic) BOOL endOfMessage;                          //@synthesize endOfMessage=_endOfMessage - In the implementation block
@property (nonatomic,retain) NSData * endOfPartData;                     //@synthesize endOfPartData=_endOfPartData - In the implementation block
@property (nonatomic,retain) NSData * endOfMessageData;                  //@synthesize endOfMessageData=_endOfMessageData - In the implementation block
@property (assign,nonatomic) unsigned long long maxEndSize;              //@synthesize maxEndSize=_maxEndSize - In the implementation block
+(id)getBoundaryData;
+(unsigned long long)boundaryLength;
+(id)getEndOfPartData;
+(id)getEndOfMessageData;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(id)readData;
-(DEReader *)reader;
-(void)setWriter:(DEWriter *)arg1 ;
-(DEWriter *)writer;
-(void)setReader:(DEReader *)arg1 ;
-(id)initReader:(id)arg1 ;
-(BOOL)nextPart;
-(id)initWriter:(id)arg1 ;
-(void)newPart;
-(id)initWriter:(id)arg1 orReader:(id)arg2 ;
-(void)closePart;
-(void)searchForEnd;
-(BOOL)writeFromURL:(id)arg1 ;
-(NSMutableData *)searchBuffer;
-(void)setSearchBuffer:(NSMutableData *)arg1 ;
-(NSData *)nextPartData;
-(void)setNextPartData:(NSData *)arg1 ;
-(BOOL)endOfPart;
-(void)setEndOfPart:(BOOL)arg1 ;
-(BOOL)endOfMessage;
-(void)setEndOfMessage:(BOOL)arg1 ;
-(NSData *)endOfPartData;
-(void)setEndOfPartData:(NSData *)arg1 ;
-(NSData *)endOfMessageData;
-(void)setEndOfMessageData:(NSData *)arg1 ;
-(unsigned long long)maxEndSize;
-(void)setMaxEndSize:(unsigned long long)arg1 ;
@end

