/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class MKLocalSearch;

@interface WFSearchLocalBusinessesAction : WFAction {

	MKLocalSearch* _localSearch;

}

@property (nonatomic,retain) MKLocalSearch * localSearch;              //@synthesize localSearch=_localSearch - In the implementation block
-(void)cancel;
-(MKLocalSearch *)localSearch;
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)shouldUseMetricSystem;
-(void)runSearchWithLocation:(id)arg1 ;
@end

