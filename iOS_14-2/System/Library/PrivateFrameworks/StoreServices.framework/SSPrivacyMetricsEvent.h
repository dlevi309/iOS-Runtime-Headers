/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString, NSNumber;

@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * acknowledgmentIdentifier; 
@property (nonatomic,retain) NSNumber * acknowledgmentVersion; 
@property (assign,nonatomic) BOOL acknowledged; 
@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (assign,nonatomic) BOOL displayed; 
-(id)init;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDisplayed:(BOOL)arg1 ;
-(BOOL)displayed;
-(BOOL)acknowledged;
-(NSString *)acknowledgmentIdentifier;
-(NSNumber *)acknowledgmentVersion;
-(void)setAcknowledged:(BOOL)arg1 ;
-(void)setAcknowledgmentIdentifier:(NSString *)arg1 ;
-(void)setAcknowledgmentVersion:(NSNumber *)arg1 ;
@end

