/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@class NSData;

@interface SCROBrailleLineVirtualStatus : NSObject {

	int _alignment;
	NSData* _data;
	long long _length;
	char* _cells;

}

@property (nonatomic,retain) NSData * data;                 //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int alignment;                 //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long length;              //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) char* cells;                   //@synthesize cells=_cells - In the implementation block
-(void)dealloc;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(char*)cells;
-(void)setCells:(char*)arg1 ;
@end

