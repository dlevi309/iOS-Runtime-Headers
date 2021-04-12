/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

