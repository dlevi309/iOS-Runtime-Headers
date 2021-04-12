/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOPhoneNumberResolving;
@interface GEOPhoneNumberResolver : NSObject {

	id<GEOPhoneNumberResolving> _resolver;

}
+(void)useProxy:(Class)arg1 ;
+(void)useRemoteResolver;
+(id)sharedResolver;
+(void)useLocalResolver;
-(id)init;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_alePackResolution:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
@end

