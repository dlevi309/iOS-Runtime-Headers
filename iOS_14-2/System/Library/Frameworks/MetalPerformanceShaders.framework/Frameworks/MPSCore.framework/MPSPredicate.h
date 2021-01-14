/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDevice:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)init;
-(id)debugDescription;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(id<MTLBuffer>)predicateBuffer;
-(unsigned long long)predicateOffset;
-(void)dealloc;
@end

