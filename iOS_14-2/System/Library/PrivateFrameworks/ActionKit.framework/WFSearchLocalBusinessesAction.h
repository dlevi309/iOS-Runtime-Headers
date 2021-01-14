/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class MKLocalSearch;

@interface WFSearchLocalBusinessesAction : WFAction {

	MKLocalSearch* _localSearch;

}

@property (nonatomic,retain) MKLocalSearch * localSearch;              //@synthesize localSearch=_localSearch - In the implementation block
-(MKLocalSearch *)localSearch;
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(void)cancel;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)shouldUseMetricSystem;
-(void)runSearchWithLocation:(id)arg1 ;
@end

