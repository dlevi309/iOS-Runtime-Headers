/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL allowUnauthenticatedRequests; 
@property (copy) NSArray * accessories; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)accessories;
-(void)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(BOOL)allowUnauthenticatedRequests;
-(void)setAllowUnauthenticatedRequests:(BOOL)arg1 ;
@end

