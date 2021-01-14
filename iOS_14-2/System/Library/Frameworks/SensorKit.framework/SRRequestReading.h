/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

@class NSString;


@protocol SRRequestReading <SRRequesting>
@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (nonatomic,retain) NSString * deviceIdentifier; 
@required
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(id)arg1;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(id)arg1;

@end

