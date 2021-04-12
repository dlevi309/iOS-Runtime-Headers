/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

