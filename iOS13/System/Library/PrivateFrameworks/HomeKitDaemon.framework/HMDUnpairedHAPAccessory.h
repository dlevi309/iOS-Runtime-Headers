/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>

@class NSMutableArray, NSData, NSArray;

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory {

	NSMutableArray* _accessoryServers;
	long long _certificationStatus;
	NSData* _setupHash;

}

@property (copy,readonly) NSArray * accessoryServers; 
@property (nonatomic,readonly) unsigned long long transportTypes; 
@property (assign,nonatomic) long long certificationStatus;                    //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (nonatomic,retain) NSData * setupHash;                               //@synthesize setupHash=_setupHash - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)transportTypes;
-(BOOL)isReachable;
-(long long)certificationStatus;
-(void)setCertificationStatus:(long long)arg1 ;
-(long long)associationOptions;
-(void)identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)setupHash;
-(void)setSetupHash:(NSData *)arg1 ;
-(BOOL)hasBTLELink;
-(id)preferredAccessoryServer;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(id)dumpDescription;
-(BOOL)hasIPLink;
-(NSArray *)accessoryServers;
-(id)initWithAccessoryServer:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)addAccessoryServer:(id)arg1 ;
-(void)removeAccessoryServer:(id)arg1 ;
-(id)descriptionForTransportTypes;
@end

