/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL allowUnauthenticatedRequests; 
@property (copy) NSArray * accessories; 
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)addAccessory:(id)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(void)setAllowUnauthenticatedRequests:(BOOL)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(NSArray *)accessories;
-(BOOL)isEnabled;
-(BOOL)allowUnauthenticatedRequests;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

