/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSString;

@interface EspressoDataFrameAttachment : NSObject {

	BOOL _disabled;
	NSString* _filePath;
	void* _rawPointer;
	unsigned long long _offset;
	unsigned long long _size;

}

@property (retain) NSString * filePath;                    //@synthesize filePath=_filePath - In the implementation block
@property (assign) void* rawPointer;                       //@synthesize rawPointer=_rawPointer - In the implementation block
@property (assign) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign) unsigned long long size;                //@synthesize size=_size - In the implementation block
@property (assign) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
+(id)fromDict:(id)arg1 frameStorage:(id)arg2 ;
-(unsigned long long)size;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(BOOL)disabled;
-(unsigned long long)offset;
-(void*)rawPointer;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(void)setRawPointer:(void*)arg1 ;
@end

