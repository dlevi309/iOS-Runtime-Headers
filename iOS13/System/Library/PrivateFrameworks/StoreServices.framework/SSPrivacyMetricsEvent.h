/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)displayed;
-(void)setDisplayed:(BOOL)arg1 ;
-(BOOL)acknowledged;
-(NSString *)acknowledgmentIdentifier;
-(NSNumber *)acknowledgmentVersion;
-(void)setAcknowledged:(BOOL)arg1 ;
-(void)setAcknowledgmentIdentifier:(NSString *)arg1 ;
-(void)setAcknowledgmentVersion:(NSNumber *)arg1 ;
@end

