/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

@class NSString;


@protocol AKFollowUpItemFactory <NSObject>
@property (nonatomic,copy) NSString * extensionIdentifier; 
@property (nonatomic,copy) NSString * representingBundlePath; 
@property (nonatomic,copy) NSString * bundleIconName; 
@required
-(void)setRepresentingBundlePath:(id)arg1;
-(void)setBundleIconName:(id)arg1;
-(id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2;
-(id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1;
-(BOOL)IsFollowUpItemNotificationForced:(id)arg1;
-(NSString *)representingBundlePath;
-(NSString *)bundleIconName;
-(void)setExtensionIdentifier:(id)arg1;
-(NSString *)extensionIdentifier;

@end

