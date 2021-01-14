/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLength:(long long)arg1 ;
-(char*)cells;
-(int)alignment;
-(long long)length;
-(void)setData:(NSData *)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(NSData *)data;
-(void)setCells:(char*)arg1 ;
-(void)dealloc;
@end

