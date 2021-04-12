/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSDate;


@protocol MSPHistoryEntry <MSPImmutableObject>
@property (nonatomic,copy,readonly) NSDate * usageDate; 
@property (nonatomic,readonly) BOOL tracksRAPReportingOnly; 
@required
-(BOOL)isFailed;
-(NSDate *)usageDate;
-(void)ifSearch:(/*^block*/id)arg1 ifRoute:(/*^block*/id)arg2 ifPlaceDisplay:(/*^block*/id)arg3 ifTransitLineItem:(/*^block*/id)arg4;
-(BOOL)isUserVisibleDuplicateOfEntry:(id)arg1;
-(BOOL)tracksRAPReportingOnly;

@end

