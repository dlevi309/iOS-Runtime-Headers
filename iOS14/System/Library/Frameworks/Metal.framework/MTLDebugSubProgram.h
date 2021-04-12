/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(oneway void)release;
-(id)retain;
-(NSString *)filename;
-(NSString *)name;
-(oneway void)releaseInternal;
-(unsigned)line;
@end

