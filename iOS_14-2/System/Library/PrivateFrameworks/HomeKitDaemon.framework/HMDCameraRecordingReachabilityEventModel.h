/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate;

@interface HMDCameraRecordingReachabilityEventModel : HMBModel

@property (retain) NSNumber * reachableField; 
@property (retain) NSDate * dateOfOccurrence; 
@property (assign) BOOL reachable; 
+(id)hmbExternalRecordType;
+(id)hmbProperties;
-(void)setReachable:(BOOL)arg1 ;
-(id)createEvent;
-(BOOL)reachable;
@end

