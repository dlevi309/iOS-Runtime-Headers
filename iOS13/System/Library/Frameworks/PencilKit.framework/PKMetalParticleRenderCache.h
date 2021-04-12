/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKStrokeRenderCache.h>

@class NSMutableArray, NSArray, NSString;

@interface PKMetalParticleRenderCache : NSObject <PKStrokeRenderCache> {

	NSMutableArray* _buffers;
	unsigned long long _totalCost;
	unsigned long long _inkVersion;

}

@property (nonatomic,readonly) NSArray * buffers; 
@property (nonatomic,readonly) unsigned long long inkVersion;              //@synthesize inkVersion=_inkVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(unsigned long long)inkVersion;
-(unsigned long long)cacheCost;
-(BOOL)needsCompute;
-(void)addBuffer:(id)arg1 ;
-(NSArray *)buffers;
-(id)initWithDevice:(id)arg1 inkVersion:(unsigned long long)arg2 ;
@end

