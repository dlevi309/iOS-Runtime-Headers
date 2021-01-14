/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSSet;


@protocol HFServiceVendor <HFAccessoryVendor>
@property (nonatomic,readonly) NSSet * services; 
@optional
-(BOOL)shouldReduceOptionItemsForNotifyingCharacteristics;

@required
-(NSSet *)services;

@end

