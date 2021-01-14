/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

