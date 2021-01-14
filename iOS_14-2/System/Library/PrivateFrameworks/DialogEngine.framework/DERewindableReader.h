/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/DEReader.h>

@protocol DEReader;
@class NSObject, NSMutableData;

@interface DERewindableReader : NSObject <DEReader> {

	BOOL _rewound;
	NSObject*<DEReader> _reader;
	NSMutableData* _rewindData;
	unsigned long long _rewindOffset;

}

@property (nonatomic,retain) NSObject*<DEReader> reader;                   //@synthesize reader=_reader - In the implementation block
@property (assign,nonatomic) BOOL rewound;                                 //@synthesize rewound=_rewound - In the implementation block
@property (nonatomic,retain) NSMutableData * rewindData;                   //@synthesize rewindData=_rewindData - In the implementation block
@property (assign,nonatomic) unsigned long long rewindOffset;              //@synthesize rewindOffset=_rewindOffset - In the implementation block
-(id)init;
-(void)setRewound:(BOOL)arg1 ;
-(NSMutableData *)rewindData;
-(void)setRewindData:(NSMutableData *)arg1 ;
-(unsigned long long)rewindOffset;
-(void)setRewindOffset:(unsigned long long)arg1 ;
-(NSObject*<DEReader>)reader;
-(void)close;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(BOOL)rewind;
-(BOOL)rewound;
-(id)readData;
-(BOOL)isRewindable;
-(void)disableRewind;
-(id)initWithReader:(id)arg1 ;
-(void)setReader:(NSObject*<DEReader>)arg1 ;
-(void)dealloc;
@end

