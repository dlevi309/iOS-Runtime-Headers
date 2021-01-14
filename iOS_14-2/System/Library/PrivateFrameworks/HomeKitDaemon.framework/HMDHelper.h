/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDHelperExternalProtocol;
@interface HMDHelper : NSObject {

	id<HMDHelperExternalProtocol> _externalProtocol;

}

@property (nonatomic,retain) id<HMDHelperExternalProtocol> externalProtocol;              //@synthesize externalProtocol=_externalProtocol - In the implementation block
+(id)sharedHelper;
+(void)setSharedHelper:(id)arg1 ;
-(id)initWithExternalProtocol:(id)arg1 ;
-(id)hashedRouteIDForIdentifier:(id)arg1 ;
-(id<HMDHelperExternalProtocol>)externalProtocol;
-(void)setExternalProtocol:(id<HMDHelperExternalProtocol>)arg1 ;
@end

