/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLMetricsReporter.h>

@class RTCSecureHierarchyToken, RTCReporting, PGManager, NSString;

@interface PLRTCMetricsReporter : NSObject <PLMetricsReporter> {

	RTCSecureHierarchyToken* _reportingSessionToken;
	RTCReporting* _reportingSession;
	PGManager* _graphManager;

}

@property (nonatomic,retain) PGManager * graphManager;                                     //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,retain) RTCSecureHierarchyToken * reportingSessionToken;              //@synthesize reportingSessionToken=_reportingSessionToken - In the implementation block
@property (nonatomic,retain) RTCReporting * reportingSession;                              //@synthesize reportingSession=_reportingSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(RTCReporting *)reportingSession;
-(void)reportMetricsEvents:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(RTCSecureHierarchyToken *)reportingSessionToken;
-(void)setReportingSessionToken:(RTCSecureHierarchyToken *)arg1 ;
-(void)setReportingSession:(RTCReporting *)arg1 ;
-(PGManager *)graphManager;
-(void)setGraphManager:(PGManager *)arg1 ;
@end

