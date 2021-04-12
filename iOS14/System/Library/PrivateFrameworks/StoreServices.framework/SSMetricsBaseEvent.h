/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSNumber * pixelRatio; 
@property (nonatomic,retain) NSNumber * screenHeight; 
@property (nonatomic,retain) NSNumber * screenWidth; 
@property (nonatomic,retain) NSNumber * windowHeight; 
@property (nonatomic,retain) NSString * windowOrientation; 
@property (nonatomic,retain) NSNumber * windowWidth; 
@property (nonatomic,retain) NSString * pageContext; 
@property (nonatomic,retain) NSString * pageDescription; 
@property (assign,nonatomic) unsigned long long pageID; 
@property (nonatomic,retain) NSString * pageType; 
@property (nonatomic,retain) NSString * pageURL; 
-(id)init;
-(NSString *)pageURL;
-(unsigned long long)pageID;
-(NSString *)pageType;
-(void)setPageURL:(NSString *)arg1 ;
-(void)setScreenHeight:(NSNumber *)arg1 ;
-(NSString *)pageContext;
-(NSString *)pageDescription;
-(NSNumber *)pixelRatio;
-(void)setPageContext:(NSString *)arg1 ;
-(void)setPageDescription:(NSString *)arg1 ;
-(void)setPageID:(unsigned long long)arg1 ;
-(void)setPageType:(NSString *)arg1 ;
-(void)setPixelRatio:(NSNumber *)arg1 ;
-(void)setWindowHeight:(NSNumber *)arg1 ;
-(void)setWindowOrientation:(NSString *)arg1 ;
-(void)setWindowWidth:(NSNumber *)arg1 ;
-(NSNumber *)windowHeight;
-(NSNumber *)windowWidth;
-(id)description;
-(NSNumber *)screenWidth;
-(NSNumber *)screenHeight;
-(NSString *)windowOrientation;
-(void)setScreenWidth:(NSNumber *)arg1 ;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
@end

