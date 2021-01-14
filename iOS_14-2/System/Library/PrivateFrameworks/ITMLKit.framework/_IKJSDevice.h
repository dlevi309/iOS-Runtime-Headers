/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isInAirplaneMode;
-(NSNumber *)pixelRatio;
-(BOOL)isSeedBuild;
-(NSString *)vendorID;
-(BOOL)runningAnInternalBuild;
-(id)capacity:(id)arg1;
-(double)lastNetworkChangedTime;
-(BOOL)isInRetailDemoMode;
-(NSString *)osBuildNumber;

@end

