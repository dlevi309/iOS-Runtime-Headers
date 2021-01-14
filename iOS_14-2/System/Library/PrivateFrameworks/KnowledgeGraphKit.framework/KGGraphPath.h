/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@interface KGGraphPath : NSObject {

	unsigned long long _sourceNodeIdentifier;
	unsigned long long _targetNodeIdentifier;
	unsigned long long _numberOfPaths;

}

@property (nonatomic,readonly) unsigned long long sourceNodeIdentifier;              //@synthesize sourceNodeIdentifier=_sourceNodeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long targetNodeIdentifier;              //@synthesize targetNodeIdentifier=_targetNodeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPaths;                     //@synthesize numberOfPaths=_numberOfPaths - In the implementation block
-(id)description;
-(id)initWithSourceNodeIdentifier:(unsigned long long)arg1 targetNodeIdentifier:(unsigned long long)arg2 numberOfPaths:(unsigned long long)arg3 ;
-(unsigned long long)sourceNodeIdentifier;
-(unsigned long long)targetNodeIdentifier;
-(unsigned long long)numberOfPaths;
@end

