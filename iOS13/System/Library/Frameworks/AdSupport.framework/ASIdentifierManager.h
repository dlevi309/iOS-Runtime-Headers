/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AdSupport.framework/AdSupport
*/


@class NSUUID;

@interface ASIdentifierManager : NSObject

@property (nonatomic,readonly) NSUUID * advertisingIdentifier; 
@property (getter=isAdvertisingTrackingEnabled,nonatomic,readonly) BOOL advertisingTrackingEnabled; 
+(id)sharedManager;
-(void)clearAdvertisingIdentifier;
-(NSUUID *)advertisingIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;
@end

