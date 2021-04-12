/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class VRFWitness, NSMutableArray;

@interface QueryResponse_DeviceWitness : GPBMessage

@property (nonatomic,retain) VRFWitness * deviceIdWitness; 
@property (assign,nonatomic) BOOL hasDeviceIdWitness; 
@property (nonatomic,retain) NSMutableArray * clientDataWitnessArray; 
@property (nonatomic,readonly) unsigned long long clientDataWitnessArray_Count; 
+(id)descriptor;
@end

