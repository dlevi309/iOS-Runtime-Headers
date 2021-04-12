/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSString;

@interface FCFeedTransformationBlockFilter : NSObject <FCFeedTransforming> {

	/*^block*/id _predicate;

}

@property (nonatomic,copy) id predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blockFilterWithPredicate:(/*^block*/id)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(id)transformFeedItems:(id)arg1 ;
@end

