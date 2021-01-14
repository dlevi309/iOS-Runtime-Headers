/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (nonatomic,readonly) NSArray * devices; 
+(id)sharedInstance;
-(NSArray *)devices;
-(void)overrideSignalStrengthLimit:(long long)arg1 ;
-(void)end;
-(void)begin;
-(id)init;
@end

