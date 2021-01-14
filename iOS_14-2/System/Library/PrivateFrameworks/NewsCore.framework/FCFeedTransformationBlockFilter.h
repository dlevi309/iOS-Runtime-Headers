/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)predicate;
-(void)setPredicate:(id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end

