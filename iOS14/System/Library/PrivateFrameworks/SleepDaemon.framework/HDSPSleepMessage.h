/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HKSPDictionarySerializable.h>

@protocol HKSPSyncAnchor;
@class NSString;

@interface HDSPSleepMessage : NSObject <HKSPDictionarySerializable> {

	id<HKSPSyncAnchor> _syncAnchor;

}

@property (nonatomic,copy,readonly) id<HKSPSyncAnchor> syncAnchor;              //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (nonatomic,readonly) unsigned long long messageType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)messageType;
-(id<HKSPSyncAnchor>)syncAnchor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSyncAnchor:(id)arg1 ;
@end

