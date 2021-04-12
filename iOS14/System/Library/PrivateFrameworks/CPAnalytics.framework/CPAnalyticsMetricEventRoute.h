/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, NSArray;

@interface CPAnalyticsMetricEventRoute : NSObject {

	NSString* _destination;
	NSString* _destinationEventKey;
	NSArray* _propertiesToInclude;

}

@property (nonatomic,readonly) NSString * destination;                      //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSString * destinationEventKey;              //@synthesize destinationEventKey=_destinationEventKey - In the implementation block
@property (nonatomic,readonly) NSArray * propertiesToInclude;               //@synthesize propertiesToInclude=_propertiesToInclude - In the implementation block
-(NSArray *)propertiesToInclude;
-(id)initWithConfig:(id)arg1 ;
-(NSString *)destinationEventKey;
-(NSString *)destination;
@end

