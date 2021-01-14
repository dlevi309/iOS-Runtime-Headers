/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@class NSString;

@interface BUCellularIdentity : NSObject {

	BOOL _roaming;
	NSString* _defaultsKey;
	NSString* _simIdentity;

}

@property (assign,getter=isRoaming,nonatomic) BOOL roaming;              //@synthesize roaming=_roaming - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                   //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) NSString * simIdentity;                   //@synthesize simIdentity=_simIdentity - In the implementation block
+(id)_digestMD5:(id)arg1 ;
+(id)identityForSubscription:(id)arg1 usingClient:(id)arg2 error:(id*)arg3 ;
-(BOOL)isRoaming;
-(id)description;
-(NSString *)defaultsKey;
-(id)initWithSIMIdentity:(id)arg1 roaming:(BOOL)arg2 ;
-(void)setRoaming:(BOOL)arg1 ;
-(NSString *)simIdentity;
@end

