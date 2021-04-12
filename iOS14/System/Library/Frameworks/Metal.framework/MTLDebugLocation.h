/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)formattedDescription:(unsigned long long)arg1 ;
-(oneway void)release;
-(MTLDebugSubProgram *)scope;
-(MTLDebugLocation *)inlinedAt;
-(id)retain;
-(unsigned)column;
-(id)description;
-(oneway void)releaseInternal;
-(unsigned)line;
-(void)dealloc;
@end

