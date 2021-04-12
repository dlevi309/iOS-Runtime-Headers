/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSString, HMDPairedSync, HMDWatchSync;

@interface HMDWatchSyncState : HMFObject {

	NSMutableArray* _syncs;
	NSString* _deviceId;
	HMDPairedSync* _pairedSync;

}

@property (nonatomic,copy,readonly) NSString * deviceId;                //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) HMDWatchSync * currentSync; 
@property (nonatomic,readonly) HMDPairedSync * pairedSync;              //@synthesize pairedSync=_pairedSync - In the implementation block
+(id)resultAsString:(unsigned long long)arg1 ;
+(id)optionAsString:(unsigned long long)arg1 ;
+(BOOL)isNewBetter:(unsigned long long)arg1 present:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSString *)deviceId;
-(HMDPairedSync *)pairedSync;
-(BOOL)removeSync;
-(id)initWithDeviceId:(id)arg1 pairedSync:(id)arg2 ;
-(HMDWatchSync *)currentSync;
-(void)addNewSync:(id)arg1 ;
@end

