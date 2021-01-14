/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelectedRouteIndex:(unsigned long long)arg1 ;
-(double)startTimestamp;
-(unsigned long long)selectedRouteIndex;
-(NSData *)routeID;
-(double)endTimestamp;
-(void)setStartTimestamp:(double)arg1 ;
-(void)setEndTimestamp:(double)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
@end

