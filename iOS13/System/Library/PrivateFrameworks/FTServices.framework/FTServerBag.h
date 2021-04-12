/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedInstanceForBagType:(long long)arg1 ;
+(id)_sharedInstance;
+(id)_sharedInstanceForType:(long long)arg1 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isLoaded;
-(BOOL)isLoading;
-(void)startBagLoad;
-(NSString *)apsEnvironmentName;
-(id)_bag;
-(id)_cachedBag;
-(BOOL)isInDebilitatedMode;
-(BOOL)isServerAvailable;
-(void)forceBagLoad;
-(id)urlWithKey:(id)arg1 ;
-(NSURL *)bagURL;
-(BOOL)allowSelfSignedCertificates;
-(BOOL)allowUnsignedBags;
-(id)initWithBagType:(long long)arg1 ;
@end

