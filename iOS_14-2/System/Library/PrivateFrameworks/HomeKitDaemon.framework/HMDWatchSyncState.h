/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(NSString *)identifier;
-(NSString *)deviceId;
-(void)dealloc;
-(HMDPairedSync *)pairedSync;
-(BOOL)removeSync;
-(id)initWithDeviceId:(id)arg1 pairedSync:(id)arg2 ;
-(HMDWatchSync *)currentSync;
-(void)addNewSync:(id)arg1 ;
@end

