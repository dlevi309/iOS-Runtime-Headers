/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKStrokeRenderCache.h>

@class NSMutableArray, NSArray, NSString;

@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache> {

	NSMutableArray* _buffers;
	unsigned long long _totalCost;
	BOOL _purgeableBuffers;

}

@property (nonatomic,readonly) NSArray * buffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)buffers;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(BOOL)isCompatibleWithInk:(id)arg1 ;
-(unsigned long long)cacheCost;
-(BOOL)needsCompute;
-(void)addBuffer:(id)arg1 ;
-(id)initWithPurgeableBuffers:(BOOL)arg1 ;
@end

