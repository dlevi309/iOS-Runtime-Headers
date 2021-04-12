/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSArray;

@interface STMapViewport : STSiriModelObject {

	double _northLatitude;
	double _southLatitude;
	double _eastLongitude;
	double _westLongitude;
	double _timeSinceViewportChanged;
	double _timeSinceViewportEnteredForeground;
	NSArray* _viewportVertices;

}

@property (assign,nonatomic) double northLatitude;                                   //@synthesize northLatitude=_northLatitude - In the implementation block
@property (assign,nonatomic) double southLatitude;                                   //@synthesize southLatitude=_southLatitude - In the implementation block
@property (assign,nonatomic) double eastLongitude;                                   //@synthesize eastLongitude=_eastLongitude - In the implementation block
@property (assign,nonatomic) double westLongitude;                                   //@synthesize westLongitude=_westLongitude - In the implementation block
@property (assign,nonatomic) double timeSinceViewportChanged;                        //@synthesize timeSinceViewportChanged=_timeSinceViewportChanged - In the implementation block
@property (assign,nonatomic) double timeSinceViewportEnteredForeground;              //@synthesize timeSinceViewportEnteredForeground=_timeSinceViewportEnteredForeground - In the implementation block
@property (nonatomic,copy) NSArray * viewportVertices;                               //@synthesize viewportVertices=_viewportVertices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_aceContextObjectValue;
-(id)initWithCoder:(id)arg1 ;
-(double)eastLongitude;
-(void)setEastLongitude:(double)arg1 ;
-(double)northLatitude;
-(void)setNorthLatitude:(double)arg1 ;
-(double)southLatitude;
-(void)setSouthLatitude:(double)arg1 ;
-(double)westLongitude;
-(void)setWestLongitude:(double)arg1 ;
-(double)timeSinceViewportChanged;
-(void)setTimeSinceViewportChanged:(double)arg1 ;
-(double)timeSinceViewportEnteredForeground;
-(void)setTimeSinceViewportEnteredForeground:(double)arg1 ;
-(NSArray *)viewportVertices;
-(void)setViewportVertices:(NSArray *)arg1 ;
@end

