/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/


@protocol OS_nw_parameters;
@class NSObject;

@interface NRParameters : NSObject {

	unsigned char _serviceClass;
	NSObject*<OS_nw_parameters> _parameters;

}

@property (nonatomic,retain) NSObject*<OS_nw_parameters> parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned char serviceClass;                          //@synthesize serviceClass=_serviceClass - In the implementation block
-(NSObject*<OS_nw_parameters>)parameters;
-(void)setParameters:(NSObject*<OS_nw_parameters>)arg1 ;
-(id)init;
-(unsigned char)serviceClass;
-(id)copyParameters;
-(id)description;
-(void)setServiceClass:(unsigned char)arg1 ;
-(id)initWithParameters:(id)arg1 ;
@end

