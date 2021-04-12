/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMapTable, NSLock;

@interface _NTKSharedJetsamInfo : NSObject {

	NSMapTable* _fetchers;
	NSLock* _fetchersLock;
	int _pid;

}
+(id)sharedJetsamInfo;
-(id)init;
-(void)unregister:(id)arg1 ;
-(BOOL)getInfoFor:(id)arg1 into:(jetsam_info*)arg2 ;
-(BOOL)resetIntervalFor:(id)arg1 ;
@end

