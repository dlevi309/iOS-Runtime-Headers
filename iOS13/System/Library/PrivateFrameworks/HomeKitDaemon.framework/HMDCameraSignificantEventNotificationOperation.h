/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraClipModelOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSDate, NSData, NSDictionary, NSURL, NSString;

@interface HMDCameraSignificantEventNotificationOperation : HMDCameraClipModelOperation <HMFLogging> {

	NSDate* _dateOfOccurrence;
	unsigned long long _significantEventReason;
	NSData* _heroFrameData;
	double _offset;
	NSDictionary* _homePresenceByPairingIdentity;
	unsigned long long _confidenceLevel;
	NSURL* _heroFrameURL;

}

@property (readonly) NSURL * heroFrameURL;                                      //@synthesize heroFrameURL=_heroFrameURL - In the implementation block
@property (readonly) NSDate * dateOfOccurrence;                                 //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
@property (readonly) unsigned long long significantEventReason;                 //@synthesize significantEventReason=_significantEventReason - In the implementation block
@property (readonly) NSData * heroFrameData;                                    //@synthesize heroFrameData=_heroFrameData - In the implementation block
@property (readonly) double offset;                                             //@synthesize offset=_offset - In the implementation block
@property (readonly) NSDictionary * homePresenceByPairingIdentity;              //@synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity - In the implementation block
@property (readonly) unsigned long long confidenceLevel;                        //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)main;
-(void)finish;
-(double)offset;
-(void)cancelWithError:(id)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)confidenceLevel;
-(NSDate *)dateOfOccurrence;
-(NSDictionary *)homePresenceByPairingIdentity;
-(NSURL *)heroFrameURL;
-(NSData *)heroFrameData;
-(id)_assetForHeroFrame:(id*)arg1 ;
-(unsigned long long)significantEventReason;
-(void)_cleanUpHeroFrameAsset;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dateOfOccurrence:(id)arg4 significantEventReason:(unsigned long long)arg5 confidenceLevel:(unsigned long long)arg6 heroFrameData:(id)arg7 offset:(double)arg8 homePresenceByPairingIdentity:(id)arg9 dataSource:(id)arg10 ;
@end

