/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKTransitDeparturesDataSourceHosting <NSObject>
@optional
-(void)transitDeparturesDataSource:(id)arg1 showIncidents:(id)arg2;
-(UIEdgeInsets*)separatorInsetsForTransitDeparturesDataSource:(id)arg1;
-(id)separatorColorForTransitDeparturesDataSource:(id)arg1;
-(void)transitDeparturesDataSource:(id)arg1 didSelectConnectionInformation:(id)arg2;
-(void)transitDeparturesDataSource:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3;
-(void)transitDeparturesDataSource:(id)arg1 didSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
-(BOOL)transitDeparturesDataSource:(id)arg1 canSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
-(void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)arg1;

@required
-(id)traitsForTransitDeparturesDataSource:(id)arg1;
-(void)transitDeparturesDataSourceDidReload:(id)arg1;

@end

