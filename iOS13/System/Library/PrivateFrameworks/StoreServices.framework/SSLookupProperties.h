/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class CLLocation, NSMutableDictionary, NSNumber, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {

	CLLocation* _location;
	long long _localizationStyle;
	NSMutableDictionary* _requestParameters;
	NSNumber* _timeoutInterval;

}

@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) long long localizationStyle;              //@synthesize localizationStyle=_localizationStyle - In the implementation block
@property (nonatomic,copy) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutInterval;                 //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSNumber *)timeoutInterval;
-(void)setKeyProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)copyRequestParameters;
-(long long)localizationStyle;
-(void)setLocalizationStyle:(long long)arg1 ;
@end

