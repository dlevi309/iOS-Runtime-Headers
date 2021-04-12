/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLCTensor;

@interface MLCControlTreeNode : NSObject <NSCopying> {

	BOOL _needToNegate;
	MLCTensor* _predicate;

}

@property (nonatomic,readonly) MLCTensor * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) BOOL needToNegate;                  //@synthesize needToNegate=_needToNegate - In the implementation block
+(id)controlTreeNodeWithPredicate:(id)arg1 needToNegate:(BOOL)arg2 ;
-(MLCTensor *)predicate;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTensor:(id)arg1 needToNegate:(BOOL)arg2 ;
-(BOOL)needToNegate;
@end

