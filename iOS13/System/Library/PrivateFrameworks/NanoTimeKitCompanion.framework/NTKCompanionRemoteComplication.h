/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRemoteComplication.h>

@class NTKCompanion3rdPartyApp;

@interface NTKCompanionRemoteComplication : NTKRemoteComplication {

	NTKCompanion3rdPartyApp* _app;

}

@property (nonatomic,retain) NTKCompanion3rdPartyApp * app;              //@synthesize app=_app - In the implementation block
+(id)complicationWithApp:(id)arg1 ;
-(NTKCompanion3rdPartyApp *)app;
-(void)setApp:(NTKCompanion3rdPartyApp *)arg1 ;
-(id)localizedDetailText;
@end

