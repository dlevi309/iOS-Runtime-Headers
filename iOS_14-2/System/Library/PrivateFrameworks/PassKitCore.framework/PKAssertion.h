/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString;

@interface PKAssertion : NSObject {

	os_unfair_lock_s _invalidationLock;
	BOOL _invalidateWhenBackgrounded;
	NSString* _reason;
	unsigned long long _type;
	/*^block*/id _invalidationHandler;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL invalidateWhenBackgrounded;              //@synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(void)preheatConnection;
+(void)isAssertionValid:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 ;
-(void)markAsInvalidatedAndNotify;
-(BOOL)invalidateWhenBackgrounded;
-(id)description;
-(NSString *)reason;
-(unsigned long long)type;
-(void)invalidate;
-(void)setInvalidateWhenBackgrounded:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)identifier;
-(id)invalidationHandler;
-(void)dealloc;
@end

