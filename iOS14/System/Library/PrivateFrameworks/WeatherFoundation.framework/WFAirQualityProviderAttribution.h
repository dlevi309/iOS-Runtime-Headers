/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, UIImage, WFAirQualityProviderStation, NSURL, NSObject, NSMutableArray;

@interface WFAirQualityProviderAttribution : NSObject <NSSecureCoding, NSCopying> {

	BOOL _logoRequestInFlight;
	os_unfair_lock_s _dataSynchronizationLock;
	NSString* _name;
	long long _dataOrigination;
	UIImage* _cachedLogoImage;
	WFAirQualityProviderStation* _station;
	NSURL* _logoURL;
	NSObject*<OS_dispatch_queue> _logoImageLoadingQueue;
	NSMutableArray* _outstandingRequestsCompletionBlocks;

}

@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * logoURL;                                                     //@synthesize logoURL=_logoURL - In the implementation block
@property (assign,nonatomic) long long dataOrigination;                                         //@synthesize dataOrigination=_dataOrigination - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> logoImageLoadingQueue;                //@synthesize logoImageLoadingQueue=_logoImageLoadingQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingRequestsCompletionBlocks;              //@synthesize outstandingRequestsCompletionBlocks=_outstandingRequestsCompletionBlocks - In the implementation block
@property (assign,nonatomic) BOOL logoRequestInFlight;                                          //@synthesize logoRequestInFlight=_logoRequestInFlight - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s dataSynchronizationLock;                          //@synthesize dataSynchronizationLock=_dataSynchronizationLock - In the implementation block
@property (nonatomic,copy) UIImage * cachedLogoImage;                                           //@synthesize cachedLogoImage=_cachedLogoImage - In the implementation block
@property (nonatomic,retain) WFAirQualityProviderStation * station;                             //@synthesize station=_station - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultProviderAttribution;
-(WFAirQualityProviderStation *)station;
-(NSURL *)logoURL;
-(void)setLogoURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSynchronizationLock:(os_unfair_lock_s)arg1 ;
-(void)setDataOrigination:(long long)arg1 ;
-(NSString *)name;
-(UIImage *)cachedLogoImage;
-(void)loadLogoImageWithCompletion:(/*^block*/id)arg1 ;
-(void)setCachedLogoImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStation:(WFAirQualityProviderStation *)arg1 ;
-(id)initWithName:(id)arg1 logoURL:(id)arg2 dataOrigination:(long long)arg3 station:(id)arg4 ;
-(void)_initInternal;
-(id)initWithName:(id)arg1 logoImage:(id)arg2 dataOrigination:(long long)arg3 station:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)logoImageLoadingQueue;
-(void)p_loadRemoteLogoImageForProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)p_checkRequestInFlight;
-(void)p_queueCompletionBlock:(/*^block*/id)arg1 ;
-(void)p_setRequestInFlight;
-(id)p_imageWithData:(id)arg1 ;
-(void)p_invokeAndClearCompletionBlocksWithImage:(id)arg1 error:(id)arg2 ;
-(void)p_clearRequestInFlight;
-(BOOL)logoRequestInFlight;
-(void)setLogoRequestInFlight:(BOOL)arg1 ;
-(NSMutableArray *)outstandingRequestsCompletionBlocks;
-(id)initWithName:(id)arg1 logoURL:(id)arg2 dataOrigination:(long long)arg3 ;
-(void)setLogoImageLoadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutstandingRequestsCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)dataOrigination;
-(os_unfair_lock_s)dataSynchronizationLock;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

