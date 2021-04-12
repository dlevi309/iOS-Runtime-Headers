/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

