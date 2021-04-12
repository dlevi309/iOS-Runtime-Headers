/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDSyncOperationOptions : HMFObject {

	BOOL _cloudConflict;
	NSString* _zoneName;

}

@property (nonatomic,readonly) NSString * zoneName;                                  //@synthesize zoneName=_zoneName - In the implementation block
@property (assign,getter=isCloudConflict,nonatomic) BOOL cloudConflict;              //@synthesize cloudConflict=_cloudConflict - In the implementation block
+(id)defaultFetchOptions:(id)arg1 cloudConflict:(BOOL)arg2 ;
+(id)defaultPushOptions:(id)arg1 ;
-(id)description;
-(NSString *)zoneName;
-(BOOL)isCloudConflict;
-(void)setCloudConflict:(BOOL)arg1 ;
-(id)_initWithZone:(id)arg1 cloudConflict:(BOOL)arg2 ;
@end

