/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EKObject *)rootObject;
-(BOOL)reachedMaxDepth;
-(id)initWithRootObject:(id)arg1 ;
-(void)faultIfNeededForObject:(id)arg1 ;
-(void)setReachedMaxDepth:(BOOL)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(unsigned long long)depth;
@end

