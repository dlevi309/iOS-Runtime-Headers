/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/PHAssetWriter.h>

@class NSData;

@interface PHImageAssetWriter : PHAssetWriter {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)request;
-(id)transfer;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
@end

