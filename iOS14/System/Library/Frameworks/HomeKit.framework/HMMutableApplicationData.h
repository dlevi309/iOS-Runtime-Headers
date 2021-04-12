/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class NSUUID, HMApplicationData;


@protocol HMMutableApplicationData <HMApplicationData>
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData; 
@required
-(NSUUID *)applicationDataIdentifier;
-(void)setApplicationData:(id)arg1;
-(HMApplicationData *)applicationData;

@end

