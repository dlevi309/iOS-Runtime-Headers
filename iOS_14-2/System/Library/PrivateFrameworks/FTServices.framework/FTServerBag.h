/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@class NSURL, NSString;

@interface FTServerBag : NSObject {

	long long _type;

}

@property (readonly) NSURL * bagURL; 
@property (readonly) NSString * apsEnvironmentName; 
@property (readonly) BOOL allowSelfSignedCertificates; 
@property (readonly) BOOL allowUnsignedBags; 
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
@property (readonly) BOOL isInDebilitatedMode; 
@property (readonly) BOOL isServerAvailable; 
+(id)sharedInstance;
+(id)_sharedInstance;
+(id)sharedInstanceForBagType:(long long)arg1 ;
+(id)_sharedInstanceForType:(long long)arg1 ;
-(BOOL)isLoading;
-(NSURL *)bagURL;
-(id)_bag;
-(id)urlWithKey:(id)arg1 ;
-(void)startBagLoad;
-(void)forceBagLoad;
-(id)objectForKey:(id)arg1 ;
-(BOOL)allowUnsignedBags;
-(id)_cachedBag;
-(BOOL)allowSelfSignedCertificates;
-(id)initWithBagType:(long long)arg1 ;
-(NSString *)apsEnvironmentName;
-(BOOL)isInDebilitatedMode;
-(BOOL)isLoaded;
-(BOOL)isServerAvailable;
-(void)dealloc;
@end

