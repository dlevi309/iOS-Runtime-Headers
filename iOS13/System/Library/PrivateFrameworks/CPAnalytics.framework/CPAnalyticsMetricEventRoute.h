/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)destination;
-(id)initWithConfig:(id)arg1 ;
-(NSString *)destinationEventKey;
-(NSArray *)propertiesToInclude;
@end

