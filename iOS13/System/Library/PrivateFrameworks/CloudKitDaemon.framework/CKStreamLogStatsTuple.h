/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString;

@interface CKStreamLogStatsTuple : NSObject {

	NSString* _fileAndLine;
	unsigned long long _count;
	unsigned long long _size;

}

@property (nonatomic,retain) NSString * fileAndLine;                //@synthesize fileAndLine=_fileAndLine - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
-(unsigned long long)count;
-(unsigned long long)size;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)fileAndLine;
-(void)setFileAndLine:(NSString *)arg1 ;
@end

