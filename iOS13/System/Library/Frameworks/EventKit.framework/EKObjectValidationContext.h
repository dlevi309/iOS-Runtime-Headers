/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class EKObject;

@interface EKObjectValidationContext : NSObject {

	BOOL _reachedMaxDepth;
	EKObject* _rootObject;
	unsigned long long _depth;

}

@property (nonatomic,readonly) EKObject * rootObject;               //@synthesize rootObject=_rootObject - In the implementation block
@property (assign,nonatomic) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) BOOL reachedMaxDepth;                  //@synthesize reachedMaxDepth=_reachedMaxDepth - In the implementation block
-(unsigned long long)depth;
-(EKObject *)rootObject;
-(void)setDepth:(unsigned long long)arg1 ;
-(BOOL)reachedMaxDepth;
-(id)initWithRootObject:(id)arg1 ;
-(void)faultIfNeededForObject:(id)arg1 ;
-(void)setReachedMaxDepth:(BOOL)arg1 ;
@end

