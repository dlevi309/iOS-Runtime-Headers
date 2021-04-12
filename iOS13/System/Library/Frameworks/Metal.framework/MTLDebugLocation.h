/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@class MTLDebugInstrumentationData, MTLDebugSubProgram;

@interface MTLDebugLocation : NSObject {

	MTLDebugInstrumentationData* _data;
	DebugLocation* _debugLoc;

}

@property (nonatomic,readonly) MTLDebugSubProgram * scope; 
@property (nonatomic,readonly) unsigned line; 
@property (nonatomic,readonly) unsigned column; 
@property (nonatomic,readonly) MTLDebugLocation * inlinedAt; 
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)description;
-(MTLDebugSubProgram *)scope;
-(unsigned)line;
-(unsigned)column;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLDebugLocation *)inlinedAt;
-(oneway void)releaseInternal;
@end

