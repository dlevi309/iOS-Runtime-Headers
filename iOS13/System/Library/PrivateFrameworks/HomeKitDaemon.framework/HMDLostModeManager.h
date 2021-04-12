/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class NSString;

@interface HMDLostModeManager : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	BOOL _lost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isLost,readonly) BOOL lost; 
+(id)sharedManager;
+(id)logCategory;
-(id)init;
-(id)attributeDescriptions;
-(BOOL)isLost;
@end

