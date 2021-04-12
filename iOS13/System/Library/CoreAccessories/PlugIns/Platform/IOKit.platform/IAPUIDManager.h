/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@interface IAPUIDManager : NSObject
+(id)sharedIAPUIDManager;
-(id)init;
-(void)dealloc;
-(unsigned long long)iapUID:(id)arg1 ;
-(BOOL)removeIAPUID:(unsigned long long)arg1 ;
-(id)objectForIAPUID:(unsigned long long)arg1 ;
-(BOOL)isIAPUIDPresent:(unsigned long long)arg1 ;
@end

