/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject {

	HMCharacteristicRequest* _request;
	NSError* _error;

}

@property (nonatomic,retain) HMCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * error;                              //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSError *)error;
-(void)setRequest:(HMCharacteristicRequest *)arg1 ;
-(HMCharacteristicRequest *)request;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
@end

