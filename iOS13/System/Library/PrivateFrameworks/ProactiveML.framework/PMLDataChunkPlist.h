/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLDataChunk.h>

@interface PMLDataChunkPlist : PMLDataChunk {

	id _plist;
	BOOL _parsed;

}

@property (nonatomic,readonly) id plist; 
+(unsigned)dataChunkType;
+(id)chunkWithPlist:(id)arg1 ;
-(id)plist;
@end

