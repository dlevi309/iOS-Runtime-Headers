/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSURL, NSFileHandle, NSData, NSMutableData;

@interface DEReader : NSObject {

	BOOL _rewound;
	NSURL* _src;
	NSFileHandle* _file;
	NSData* _contents;
	unsigned long long _contentsOffset;
	NSMutableData* _rewindBuffer;
	unsigned long long _rewindOffset;

}

@property (nonatomic,retain) NSURL * src;                                    //@synthesize src=_src - In the implementation block
@property (nonatomic,retain) NSFileHandle * file;                            //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) NSData * contents;                              //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) unsigned long long contentsOffset;              //@synthesize contentsOffset=_contentsOffset - In the implementation block
@property (assign,nonatomic) BOOL rewound;                                   //@synthesize rewound=_rewound - In the implementation block
@property (nonatomic,retain) NSMutableData * rewindBuffer;                   //@synthesize rewindBuffer=_rewindBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long rewindOffset;                //@synthesize rewindOffset=_rewindOffset - In the implementation block
+(id)readDataOfLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 from:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)close;
-(NSData *)contents;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(NSFileHandle *)file;
-(id)readData;
-(void)setContents:(NSData *)arg1 ;
-(void)setFile:(NSFileHandle *)arg1 ;
-(NSURL *)src;
-(void)setSrc:(NSURL *)arg1 ;
-(id)initFromData:(id)arg1 ;
-(void)rewind;
-(BOOL)isRewindable;
-(void)disableRewind;
-(id)initFromData:(id)arg1 rewindable:(BOOL)arg2 ;
-(id)initFromURL:(id)arg1 ;
-(id)initFromURL:(id)arg1 rewindable:(BOOL)arg2 ;
-(id)initFromURL:(id)arg1 orData:(id)arg2 rewindable:(BOOL)arg3 ;
-(unsigned long long)contentsOffset;
-(void)setContentsOffset:(unsigned long long)arg1 ;
-(BOOL)rewound;
-(void)setRewound:(BOOL)arg1 ;
-(NSMutableData *)rewindBuffer;
-(void)setRewindBuffer:(NSMutableData *)arg1 ;
-(unsigned long long)rewindOffset;
-(void)setRewindOffset:(unsigned long long)arg1 ;
@end

