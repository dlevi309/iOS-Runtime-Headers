/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIAssertionRecord : NSObject {

	BOOL _initialState;
	unsigned long long _type;
	long long _activeAssertionCount;
	NSString* _reason;

}

@property (assign,nonatomic) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL initialState;                           //@synthesize initialState=_initialState - In the implementation block
@property (assign,nonatomic) long long activeAssertionCount;              //@synthesize activeAssertionCount=_activeAssertionCount - In the implementation block
@property (nonatomic,copy) NSString * reason;                             //@synthesize reason=_reason - In the implementation block
-(void)setInitialState:(BOOL)arg1 ;
-(BOOL)initialState;
-(void)setType:(unsigned long long)arg1 ;
-(long long)activeAssertionCount;
-(void)setActiveAssertionCount:(long long)arg1 ;
-(NSString *)reason;
-(unsigned long long)type;
-(void)setReason:(NSString *)arg1 ;
@end

