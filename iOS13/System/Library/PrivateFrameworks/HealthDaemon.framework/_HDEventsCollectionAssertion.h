/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDAssertion.h>

@class NSSet;

@interface _HDEventsCollectionAssertion : HDAssertion {

	NSSet* _eventCollectors;

}

@property (nonatomic,retain) NSSet * eventCollectors;              //@synthesize eventCollectors=_eventCollectors - In the implementation block
-(id)initWithOwnerIdentifier:(id)arg1 ;
-(NSSet *)eventCollectors;
-(void)setEventCollectors:(NSSet *)arg1 ;
@end

