/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class PNRPhoneNumberResolver;

@interface GEOPhoneNumberResolver : NSObject {

	PNRPhoneNumberResolver* _resolver;

}
+(id)sharedResolver;
-(id)init;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
@end

