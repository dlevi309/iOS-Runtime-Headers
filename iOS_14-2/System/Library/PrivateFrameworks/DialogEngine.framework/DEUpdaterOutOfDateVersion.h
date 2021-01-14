/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSData;

@interface DEUpdaterOutOfDateVersion : NSObject {

	unsigned long long _inode;
	NSData* _version;

}

@property (assign,nonatomic) unsigned long long inode;              //@synthesize inode=_inode - In the implementation block
@property (nonatomic,retain) NSData * version;                      //@synthesize version=_version - In the implementation block
-(unsigned long long)inode;
-(void)setVersion:(NSData *)arg1 ;
-(NSData *)version;
-(void)setInode:(unsigned long long)arg1 ;
@end

