/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKTransitDepaturesViewControllerDelegate <NSObject>
@required
-(void)transitDeparturesViewController:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3;
-(void)transitDeparturesViewController:(id)arg1 didSelectConnectionInformation:(id)arg2;
-(void)transitDeparturesViewController:(id)arg1 showIncidents:(id)arg2;
-(void)transitDeparturesViewController:(id)arg1 didSelectDepartureSequence:(id)arg2 transitMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
-(BOOL)transitDeparturesViewController:(id)arg1 canSelectDepartureSequence:(id)arg2 transitMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
-(id)transitDeparturesViewControllerTraits:(id)arg1;

@end

