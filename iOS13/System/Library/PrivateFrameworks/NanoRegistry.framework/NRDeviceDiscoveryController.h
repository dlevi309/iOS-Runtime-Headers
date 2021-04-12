/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (nonatomic,readonly) NSArray * devices; 
+(id)sharedInstance;
-(id)init;
-(void)end;
-(void)begin;
-(NSArray *)devices;
-(void)overrideSignalStrengthLimit:(long long)arg1 ;
@end

