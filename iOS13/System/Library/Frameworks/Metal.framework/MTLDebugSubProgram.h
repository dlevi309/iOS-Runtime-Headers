/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@class MTLDebugInstrumentationData, NSString;

@interface MTLDebugSubProgram : NSObject {

	MTLDebugInstrumentationData* _data;
	DebugSubProgram* _debugSubProgram;

}

@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned line; 
-(id)retain;
-(oneway void)release;
-(NSString *)name;
-(NSString *)filename;
-(unsigned)line;
-(oneway void)releaseInternal;
@end

