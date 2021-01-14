/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString, NSDictionary, CUBonjourDevice, CUNANEndpoint;

@interface CUNetServiceEndpoint : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSDictionary* _serviceInfo;
	NSString* _serviceType;
	CUBonjourDevice* _bonjourDevice;
	CUNANEndpoint* _nanEndpoint;

}

@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;                //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,retain) CUNANEndpoint * nanEndpoint;                    //@synthesize nanEndpoint=_nanEndpoint - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceInfo;              //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
-(NSDictionary *)serviceInfo;
-(CUBonjourDevice *)bonjourDevice;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)name;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(unsigned)updateWithNANEndpoint:(id)arg1 ;
-(CUNANEndpoint *)nanEndpoint;
-(void)setNanEndpoint:(CUNANEndpoint *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)serviceType;
@end

