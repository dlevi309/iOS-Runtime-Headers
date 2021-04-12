/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSData;

@interface MNTraceRouteSelectionsRow : NSObject {

	double _startTimestamp;
	double _endTimestamp;
	NSData* _routeID;
	unsigned long long _selectedRouteIndex;

}

@property (assign,nonatomic) double startTimestamp;                              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) double endTimestamp;                                //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,copy) NSData * routeID;                                     //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) unsigned long long selectedRouteIndex;              //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(double)endTimestamp;
-(unsigned long long)selectedRouteIndex;
-(void)setSelectedRouteIndex:(unsigned long long)arg1 ;
-(void)setEndTimestamp:(double)arg1 ;
@end

