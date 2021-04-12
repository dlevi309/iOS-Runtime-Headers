/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@protocol FLTelemetryController;
@class NSObject;

@interface FLTelemetryProcessor : NSObject {

	NSObject*<FLTelemetryController> _telemetryController;

}
-(id)initWithController:(id)arg1 ;
-(void)processItemRemoval:(id)arg1 ;
-(void)processItemAddition:(id)arg1 ;
-(void)processCurrentItems:(id)arg1 ;
@end

