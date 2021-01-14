/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, CLLocation, NSMutableDictionary;

@interface SSVLoadNearbyAppsOperation : NSOperation {

	NSString* _baseURLString;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CLLocation* _location;
	NSMutableDictionary* _parameters;
	/*^block*/id _responseBlock;
	NSString* _storeFrontSuffix;
	NSString* _userAgent;

}

@property (readonly) CLLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (copy) NSString * pointOfInterestIdentifier; 
@property (copy) NSString * pointOfInterestProviderIdentifier; 
@property (copy) NSString * pointOfInterestProviderURL; 
@property (copy) id responseBlock; 
@property (copy) NSString * storeFrontSuffix; 
@property (copy) NSString * userAgent; 
-(id)responseBlock;
-(id)_lookupWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithBaseURL:(id)arg1 location:(id)arg2 ;
-(NSString *)pointOfInterestIdentifier;
-(NSString *)pointOfInterestProviderIdentifier;
-(NSString *)pointOfInterestProviderURL;
-(void)setPointOfInterestIdentifier:(NSString *)arg1 ;
-(void)setPointOfInterestProviderIdentifier:(NSString *)arg1 ;
-(void)setPointOfInterestProviderURL:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(void)setResponseBlock:(id)arg1 ;
-(void)main;
-(id)_storeFrontSuffix;
-(NSString *)userAgent;
-(NSString *)storeFrontSuffix;
-(void)setUserAgent:(NSString *)arg1 ;
@end

