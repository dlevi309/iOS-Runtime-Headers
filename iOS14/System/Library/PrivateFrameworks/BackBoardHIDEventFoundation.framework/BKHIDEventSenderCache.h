/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKIOHIDServiceDisappearanceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface BKHIDEventSenderCache : NSObject <BKIOHIDServiceDisappearanceObserver> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _senderIDToSenderInfo;

}

@property (nonatomic,retain) NSMutableDictionary * senderIDToSenderInfo;              //@synthesize senderIDToSenderInfo=_senderIDToSenderInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sync;
-(id)initWithQueue:(id)arg1 ;
-(void)removeSenderInfo:(id)arg1 ;
-(void)addSenderInfo:(id)arg1 forSenderID:(unsigned long long)arg2 ;
-(id)senderInfoForSenderID:(unsigned long long)arg1 ;
-(NSMutableDictionary *)senderIDToSenderInfo;
-(NSString *)description;
-(void)serviceDidDisappear:(id)arg1 ;
-(void)addSenderInfo:(id)arg1 ;
-(void)setSenderIDToSenderInfo:(NSMutableDictionary *)arg1 ;
@end

