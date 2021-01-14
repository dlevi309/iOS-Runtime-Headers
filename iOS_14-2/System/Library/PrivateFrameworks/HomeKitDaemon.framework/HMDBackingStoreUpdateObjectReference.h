/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)uuid;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)main;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithObject:(id)arg1 uuid:(id)arg2 ;
@end

