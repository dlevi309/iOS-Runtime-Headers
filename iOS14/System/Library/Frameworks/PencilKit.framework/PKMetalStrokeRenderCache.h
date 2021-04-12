/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKStrokeRenderCache.h>

@class NSMutableArray, PKInk, NSArray, NSString;

@interface PKMetalStrokeRenderCache : NSObject <PKStrokeRenderCache> {

	NSMutableArray* _buffers;
	unsigned long long _totalCost;
	PKInk* _ink;

}

@property (nonatomic,readonly) NSArray * buffers; 
@property (nonatomic,readonly) PKInk * ink;                         //@synthesize ink=_ink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKInk *)ink;
-(NSArray *)buffers;
-(id)initWithInk:(id)arg1 ;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(BOOL)isCompatibleWithInk:(id)arg1 ;
-(unsigned long long)cacheCost;
-(BOOL)needsCompute;
-(void)addBuffer:(id)arg1 ;
@end

