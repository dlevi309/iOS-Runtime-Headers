/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class NSUUID, HMApplicationData;


@protocol HMMutableApplicationData <HMApplicationData>
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData; 
@required
-(HMApplicationData *)applicationData;
-(void)setApplicationData:(id)arg1;
-(NSUUID *)applicationDataIdentifier;

@end

