/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSLock, NSString;

@interface PKAssertion : NSObject {

	NSLock* _invalidationLock;
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
+(void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)preheatConnection;
+(void)isAssertionValid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(unsigned long long)type;
-(NSString *)reason;
-(NSString *)identifier;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidateWhenBackgrounded:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 ;
-(void)markAsInvalidatedAndNotify;
-(BOOL)invalidateWhenBackgrounded;
@end

