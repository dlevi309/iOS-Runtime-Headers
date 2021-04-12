/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class NSSet;

@interface WFContentPredicate : NSObject <WFContentPropertyContainer> {

	/*^block*/id _block;

}

@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)predicateWithBlock:(/*^block*/id)arg1 ;
+(id)truePredicate;
+(id)falsePredicate;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSSet *)containedProperties;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)evaluateWithObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

