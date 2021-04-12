/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UAPasteboardItemProviding.h>

@class NSUUID, NSString, NSFileHandle, NSNumber;

@interface UAPasteboardFileChunkItemProvider : NSObject <UAPasteboardItemProviding> {

	NSString* _type;
	NSUUID* _uuid;
	NSFileHandle* _dataFile;
	NSNumber* _offsetInFile;
	long long _chunkSize;

}

@property (retain) NSFileHandle * dataFile;                         //@synthesize dataFile=_dataFile - In the implementation block
@property (retain) NSNumber * offsetInFile;                         //@synthesize offsetInFile=_offsetInFile - In the implementation block
@property (assign) long long chunkSize;                             //@synthesize chunkSize=_chunkSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSNumber *)offsetInFile;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(long long)chunkSize;
-(void)setChunkSize:(long long)arg1 ;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(void)setOffsetInFile:(NSNumber *)arg1 ;
-(NSFileHandle *)dataFile;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithType:(id)arg1 fileHandle:(id)arg2 offsetInFile:(id)arg3 size:(long long)arg4 ;
@end

