/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, NSDate, NSNumber, HMFOSTransaction, NSData;

@interface HMDSnapshotFile : HMFObject <HMFLogging> {

	BOOL _externalFilePath;
	NSString* _directory;
	NSString* _filePath;
	NSDate* _snapshotTimestamp;
	NSNumber* _slotIdentifier;
	NSNumber* _aspectRatio;
	HMFOSTransaction* _snapshotCATransaction;

}

@property (nonatomic,retain) NSNumber * slotIdentifier;                             //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * snapshotCATransaction;              //@synthesize snapshotCATransaction=_snapshotCATransaction - In the implementation block
@property (readonly) NSString * directory;                                          //@synthesize directory=_directory - In the implementation block
@property (readonly) NSString * filePath;                                           //@synthesize filePath=_filePath - In the implementation block
@property (readonly) NSDate * snapshotTimestamp;                                    //@synthesize snapshotTimestamp=_snapshotTimestamp - In the implementation block
@property (readonly) NSNumber * aspectRatio;                                        //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (readonly) BOOL externalFilePath;                                         //@synthesize externalFilePath=_externalFilePath - In the implementation block
@property (readonly) NSData * encodedDataForIDSSend; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)filePath;
-(NSString *)directory;
-(id)logIdentifier;
-(NSNumber *)aspectRatio;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(NSNumber *)slotIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSlotIdentifier:(NSNumber *)arg1 ;
-(id)initWithImageDirectory:(id)arg1 ;
-(BOOL)prepareParametersWithFilePath:(id)arg1 snapshotData:(id)arg2 directory:(id)arg3 snapshotTimestamp:(id)arg4 resize:(BOOL)arg5 writeBack:(BOOL)arg6 ;
-(id)initWithImageDirectory:(id)arg1 filePath:(id)arg2 snapshotTimestamp:(id)arg3 ;
-(BOOL)externalFilePath;
-(NSDate *)snapshotTimestamp;
-(id)initWithImageDirectory:(id)arg1 snapshotData:(id)arg2 ;
-(id)initWithImageDirectory:(id)arg1 externalFilePath:(id)arg2 snapshotTimestamp:(id)arg3 ;
-(id)copyFileAtPath:(id)arg1 snapshotTimestamp:(id)arg2 ;
-(void)updateSlotIdentifier;
-(NSData *)encodedDataForIDSSend;
-(BOOL)decodeIDSDataReceived:(id)arg1 snapshotDataTransaction:(id)arg2 ;
-(HMFOSTransaction *)snapshotCATransaction;
-(void)setSnapshotCATransaction:(HMFOSTransaction *)arg1 ;
@end

