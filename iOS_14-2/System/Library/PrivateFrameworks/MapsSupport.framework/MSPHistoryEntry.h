/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSDate;


@protocol MSPHistoryEntry <MSPImmutableObject>
@property (nonatomic,copy,readonly) NSDate * usageDate; 
@property (nonatomic,readonly) BOOL tracksRAPReportingOnly; 
@required
-(NSDate *)usageDate;
-(BOOL)isFailed;
-(void)ifSearch:(/*^block*/id)arg1 ifRoute:(/*^block*/id)arg2 ifPlaceDisplay:(/*^block*/id)arg3 ifTransitLineItem:(/*^block*/id)arg4;
-(BOOL)isUserVisibleDuplicateOfEntry:(id)arg1;
-(BOOL)tracksRAPReportingOnly;

@end

