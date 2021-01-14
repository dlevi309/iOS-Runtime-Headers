/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCLocalVersionedTag : NSObject {

	NSString* _identifier;
	long long _minVersion;
	long long _maxVersion;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long minVersion;               //@synthesize minVersion=_minVersion - In the implementation block
@property (assign,nonatomic) long long maxVersion;               //@synthesize maxVersion=_maxVersion - In the implementation block
-(id)init;
-(void)setMaxVersion:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)minVersion;
-(void)setMinVersion:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)maxVersion;
@end

