/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/DEReader.h>

@class DERewindableReader, NSMutableData, NSData;

@interface DEMultipartReader : NSObject <DEReader> {

	BOOL _endOfPart;
	BOOL _endOfMessage;
	DERewindableReader* _reader;
	NSMutableData* _searchBuffer;
	NSData* _nextPartData;
	NSData* _endOfPartData;
	NSData* _endOfMessageData;
	unsigned long long _maxEndSize;

}

@property (nonatomic,retain) DERewindableReader * reader;                //@synthesize reader=_reader - In the implementation block
@property (nonatomic,retain) NSMutableData * searchBuffer;               //@synthesize searchBuffer=_searchBuffer - In the implementation block
@property (nonatomic,retain) NSData * nextPartData;                      //@synthesize nextPartData=_nextPartData - In the implementation block
@property (assign,nonatomic) BOOL endOfPart;                             //@synthesize endOfPart=_endOfPart - In the implementation block
@property (assign,nonatomic) BOOL endOfMessage;                          //@synthesize endOfMessage=_endOfMessage - In the implementation block
@property (nonatomic,retain) NSData * endOfPartData;                     //@synthesize endOfPartData=_endOfPartData - In the implementation block
@property (nonatomic,retain) NSData * endOfMessageData;                  //@synthesize endOfMessageData=_endOfMessageData - In the implementation block
@property (assign,nonatomic) unsigned long long maxEndSize;              //@synthesize maxEndSize=_maxEndSize - In the implementation block
+(id)getEndOfPartData;
+(id)getEndOfMessageData;
-(id)init;
-(DERewindableReader *)reader;
-(void)close;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(BOOL)endOfPart;
-(id)readData;
-(BOOL)nextPart;
-(id)initWithReader:(id)arg1 ;
-(unsigned long long)getAvailableLength;
-(void)searchForEnd;
-(id)internalReadDataOfLength:(unsigned long long)arg1 ;
-(void)setReader:(DERewindableReader *)arg1 ;
-(NSMutableData *)searchBuffer;
-(void)setSearchBuffer:(NSMutableData *)arg1 ;
-(NSData *)nextPartData;
-(void)setNextPartData:(NSData *)arg1 ;
-(void)setEndOfPart:(BOOL)arg1 ;
-(BOOL)endOfMessage;
-(void)setEndOfMessage:(BOOL)arg1 ;
-(NSData *)endOfPartData;
-(void)setEndOfPartData:(NSData *)arg1 ;
-(NSData *)endOfMessageData;
-(void)setEndOfMessageData:(NSData *)arg1 ;
-(unsigned long long)maxEndSize;
-(void)setMaxEndSize:(unsigned long long)arg1 ;
-(void)dealloc;
@end

