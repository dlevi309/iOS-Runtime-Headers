/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFOperation.h>

@class NSUUID;

@interface HMIRemovePersonsModelOperation : HMFOperation {

	BOOL _external;
	NSUUID* _sourceUUID;
	NSUUID* _homeUUID;

}

@property (readonly) NSUUID * sourceUUID;              //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) NSUUID * homeUUID;                //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) BOOL external;                    //@synthesize external=_external - In the implementation block
+(id)logCategory;
-(NSUUID *)homeUUID;
-(BOOL)external;
-(id)logIdentifier;
-(void)main;
-(NSUUID *)sourceUUID;
-(id)initWithSourceUUID:(id)arg1 homeUUID:(id)arg2 external:(BOOL)arg3 ;
-(void)removePersonsModelWithRetryOnError:(BOOL)arg1 ;
@end

