/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)containedProperties;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)evaluateWithObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

