/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_customMonogramFromPrefs;
-(id)customMonogram;
-(void)setCustomMonogram:(id)arg1 ;
-(void)_notifyClientsOfChange;
@end

