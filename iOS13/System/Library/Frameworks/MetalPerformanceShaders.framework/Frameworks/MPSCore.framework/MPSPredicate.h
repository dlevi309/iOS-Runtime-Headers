/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


@protocol MTLBuffer;
@interface MPSPredicate : NSObject {

	id<MTLBuffer> _predicateBuffer;
	unsigned long long _predicateOffset;

}

@property (nonatomic,retain,readonly) id<MTLBuffer> predicateBuffer;              //@synthesize predicateBuffer=_predicateBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long predicateOffset;                //@synthesize predicateOffset=_predicateOffset - In the implementation block
+(id)predicateWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(id<MTLBuffer>)predicateBuffer;
-(unsigned long long)predicateOffset;
@end

