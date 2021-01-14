/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_notifyClientsOfChange;
-(id)_customMonogramFromPrefs;
-(id)customMonogram;
-(void)setCustomMonogram:(id)arg1 ;
@end

