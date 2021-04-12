/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PDAssertion : NSObject {

	BOOL _invalidateWhenBackgrounded;
	unsigned long long _type;
	NSString* _identifier;
	NSString* _reason;

}

@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL invalidateWhenBackgrounded;              //@synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded - In the implementation block
-(id)description;
-(unsigned long long)type;
-(NSString *)reason;
-(NSString *)identifier;
-(void)setInvalidateWhenBackgrounded:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 ;
-(BOOL)invalidateWhenBackgrounded;
@end

