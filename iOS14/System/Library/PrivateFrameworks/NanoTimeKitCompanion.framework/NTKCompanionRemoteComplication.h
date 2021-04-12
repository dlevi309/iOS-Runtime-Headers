/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRemoteComplication.h>

@class NTKCompanion3rdPartyApp;

@interface NTKCompanionRemoteComplication : NTKRemoteComplication {

	NTKCompanion3rdPartyApp* _app;

}

@property (nonatomic,retain) NTKCompanion3rdPartyApp * app;              //@synthesize app=_app - In the implementation block
+(id)complicationWithApp:(id)arg1 ;
-(void)setApp:(NTKCompanion3rdPartyApp *)arg1 ;
-(NTKCompanion3rdPartyApp *)app;
-(id)ntk_sectionIdentifier;
-(id)localizedDetailText;
@end

