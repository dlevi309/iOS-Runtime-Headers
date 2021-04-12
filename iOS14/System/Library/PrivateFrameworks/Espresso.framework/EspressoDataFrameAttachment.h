/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)filePath;
-(void)setDisabled:(BOOL)arg1 ;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(void)setRawPointer:(void*)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(void*)rawPointer;
-(BOOL)disabled;
-(void)setFilePath:(NSString *)arg1 ;
@end

