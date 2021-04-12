/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, NSNumber;


@protocol _IKJSDevice <IKJSDevice,JSExport>
@property (nonatomic,readonly) BOOL isInAirplaneMode; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
@property (nonatomic,readonly) BOOL isInRetailDemoMode; 
@property (nonatomic,readonly) BOOL isSeedBuild; 
@property (nonatomic,readonly) NSString * vendorID; 
@property (nonatomic,readonly) NSNumber * pixelRatio; 
@property (nonatomic,readonly) BOOL runningAnInternalBuild; 
@property (nonatomic,readonly) NSString * osBuildNumber; 
@required
-(NSString *)networkType;
-(NSString *)vendorID;
-(BOOL)runningAnInternalBuild;
-(NSNumber *)pixelRatio;
-(id)capacity:(id)arg1;
-(BOOL)isInAirplaneMode;
-(double)lastNetworkChangedTime;
-(BOOL)isInRetailDemoMode;
-(BOOL)isSeedBuild;
-(NSString *)osBuildNumber;

@end

