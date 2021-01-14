/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BMSource.h>

@class _CDClientContext, _DKKnowledgeStore;

@interface BMAppClipLaunchSource : BMSource {

	_CDClientContext* _contextStore;
	_DKKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,readonly) _CDClientContext * contextStore;                 //@synthesize contextStore=_contextStore - In the implementation block
@property (nonatomic,readonly) _DKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(_CDClientContext *)contextStore;
-(_DKKnowledgeStore *)knowledgeStore;
-(void)sendEvent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

