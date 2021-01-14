/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

