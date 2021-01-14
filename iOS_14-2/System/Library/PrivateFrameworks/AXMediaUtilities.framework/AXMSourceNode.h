/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMVisionEngineNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface AXMSourceNode : AXMVisionEngineNode <NSSecureCoding> {

	NSMutableArray* _nodeQueue_resultHandlers;
	BOOL _shouldProcessRemotely;

}

@property (assign,nonatomic) BOOL shouldProcessRemotely;              //@synthesize shouldProcessRemotely=_shouldProcessRemotely - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)addResultHandler:(/*^block*/id)arg1 ;
-(void)removeResultHandler:(/*^block*/id)arg1 ;
-(void)removeAllResultHandlers;
-(void)_nodeQueue_addResultHandler:(/*^block*/id)arg1 ;
-(void)_nodeQueue_removeResultHandler:(/*^block*/id)arg1 ;
-(void)_nodeQueue_removeAllResultHandlers;
-(void)setShouldProcessRemotely:(BOOL)arg1 ;
-(void)produceImage:(id)arg1 ;
-(void)triggerWithContext:(id)arg1 cacheKey:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)resultHandlers;
-(void)nodeInitialize;
-(BOOL)shouldProcessRemotely;
@end

