/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <Foundation/NSOperation.h>

@class NSUUID;

@interface HMDBackingStoreUpdateObjectReference : NSOperation {

	id _object;
	NSUUID* _uuid;

}

@property (assign,nonatomic,__weak) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                 //@synthesize uuid=_uuid - In the implementation block
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)main;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithObject:(id)arg1 uuid:(id)arg2 ;
@end

