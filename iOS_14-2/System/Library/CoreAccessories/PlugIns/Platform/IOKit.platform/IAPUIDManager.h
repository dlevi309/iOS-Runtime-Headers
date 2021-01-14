/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@interface IAPUIDManager : NSObject
+(id)sharedIAPUIDManager;
-(id)init;
-(unsigned long long)iapUID:(id)arg1 ;
-(void)dealloc;
-(BOOL)removeIAPUID:(unsigned long long)arg1 ;
-(id)objectForIAPUID:(unsigned long long)arg1 ;
-(BOOL)isIAPUIDPresent:(unsigned long long)arg1 ;
@end

