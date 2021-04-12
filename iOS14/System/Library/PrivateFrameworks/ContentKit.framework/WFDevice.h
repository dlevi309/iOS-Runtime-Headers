/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSArray, NSString;

@interface WFDevice : NSObject {

	NSArray* _capabilities;

}

@property (nonatomic,readonly) CGRect screenBounds; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,readonly) double screenCornerRadius; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) long long platform; 
@property (nonatomic,readonly) NSArray * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSString * localizedWiFiDisplayName; 
@property (nonatomic,readonly) NSString * marketingName; 
@property (nonatomic,readonly) long long chipID; 
+(id)currentDevice;
-(NSString *)systemVersion;
-(long long)platform;
-(NSString *)model;
-(NSArray *)capabilities;
-(NSString *)marketingName;
-(NSString *)systemName;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(double)screenCornerRadius;
-(long long)chipID;
-(NSString *)localizedModel;
-(NSString *)name;
-(long long)idiom;
-(id)description;
-(CGRect)screenBounds;
-(BOOL)hasCapability:(id)arg1 ;
-(double)screenScale;
-(NSString *)localizedWiFiDisplayName;
@end

