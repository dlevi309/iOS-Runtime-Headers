/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

