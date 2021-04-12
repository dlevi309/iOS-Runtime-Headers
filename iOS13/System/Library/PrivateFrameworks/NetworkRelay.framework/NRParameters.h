/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)initWithParameters:(id)arg1 ;
-(NSObject*<OS_nw_parameters>)parameters;
-(void)setParameters:(NSObject*<OS_nw_parameters>)arg1 ;
-(unsigned char)serviceClass;
-(void)setServiceClass:(unsigned char)arg1 ;
-(id)copyParameters;
@end

