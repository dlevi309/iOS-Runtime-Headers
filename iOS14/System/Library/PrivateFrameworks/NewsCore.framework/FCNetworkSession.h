/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNetworkSession.h>
@class NSDate, NSArray;


@protocol FCNetworkSession <NSObject>
@property (nonatomic,readonly) BOOL wifiReachable; 
@property (nonatomic,readonly) long long cellularRadioAccessTechnology; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long totalSuccessCount; 
@property (nonatomic,readonly) unsigned long long totalFailureCount; 
@property (nonatomic,readonly) NSArray * eventGroups; 
@required
-(NSDate *)endDate;
-(long long)cellularRadioAccessTechnology;
-(id)generateSessionJSONDataWithOptions:(unsigned long long)arg1 error:(id*)arg2;
-(unsigned long long)totalSuccessCount;
-(unsigned long long)totalFailureCount;
-(NSDate *)startDate;
-(BOOL)wifiReachable;
-(NSArray *)eventGroups;

@end


@class NSDate, NSArray, NSMutableArray, NSString;

@interface FCNetworkSession : NSObject <FCNetworkSession> {

	NSMutableArray* _eventGroups;
	BOOL _wifiReachable;
	long long _cellularRadioAccessTechnology;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) BOOL wifiReachable;                                   //@synthesize wifiReachable=_wifiReachable - In the implementation block
@property (assign,nonatomic) long long cellularRadioAccessTechnology;              //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long totalSuccessCount; 
@property (nonatomic,readonly) unsigned long long totalFailureCount; 
@property (nonatomic,readonly) NSArray * eventGroups;                              //@synthesize eventGroups=_eventGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)endDate;
-(long long)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(long long)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(void)setWifiReachable:(BOOL)arg1 ;
-(id)generateSessionJSONDataWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)totalSuccessCount;
-(unsigned long long)totalFailureCount;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)wifiReachable;
-(void)addEventGroup:(id)arg1 ;
-(NSArray *)eventGroups;
@end

