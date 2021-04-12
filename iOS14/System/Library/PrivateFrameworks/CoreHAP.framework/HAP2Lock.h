/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>

@protocol NSLocking;
@class NSString;

@interface HAP2Lock : HAP2LoggingObject {

	AQ _lockCount;
	id<NSLocking> _internalLock;

}

@property (nonatomic,readonly) id<NSLocking> internalLock;              //@synthesize internalLock=_internalLock - In the implementation block
@property (nonatomic,readonly) NSString * name; 
+(id)new;
+(id)lockWithName:(id)arg1 ;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSString *)name;
-(void)assertOwner;
-(id<NSLocking>)internalLock;
-(id)initWithLock:(id)arg1 name:(id)arg2 ;
-(void)_performBlock:(/*^block*/id)arg1 allowRecursive:(BOOL)arg2 ;
@end

