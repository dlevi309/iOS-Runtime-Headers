/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface AMSMediaTaskTypeConfig : NSObject {

	BOOL _includePlatform;
	NSString* _hostBagKey;
	long long _type;
	NSString* _typeString;

}

@property (nonatomic,readonly) NSString * hostBagKey;              //@synthesize hostBagKey=_hostBagKey - In the implementation block
@property (nonatomic,readonly) BOOL includePlatform;               //@synthesize includePlatform=_includePlatform - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * typeString;              //@synthesize typeString=_typeString - In the implementation block
+(id)configForType:(long long)arg1 ;
-(NSString *)typeString;
-(BOOL)includePlatform;
-(id)initWithType:(long long)arg1 typeString:(id)arg2 hostBagKey:(id)arg3 includePlatform:(BOOL)arg4 ;
-(long long)type;
-(NSString *)hostBagKey;
@end

