/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject {

	HMCharacteristicRequest* _request;
	NSError* _error;

}

@property (nonatomic,retain) HMCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * error;                              //@synthesize error=_error - In the implementation block
-(void)setRequest:(HMCharacteristicRequest *)arg1 ;
-(HMCharacteristicRequest *)request;
-(NSError *)error;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

