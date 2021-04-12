/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString;

@interface CKPluginImageCacheKey : NSObject {

	NSString* _stringIdentifier;
	long long _integerIdentifier;

}

@property (nonatomic,retain) NSString * stringIdentifier;              //@synthesize stringIdentifier=_stringIdentifier - In the implementation block
@property (assign,nonatomic) long long integerIdentifier;              //@synthesize integerIdentifier=_integerIdentifier - In the implementation block
+(id)keyWithStringIdentifier:(id)arg1 integerIdentifier:(long long)arg2 ;
-(long long)integerIdentifier;
-(NSString *)stringIdentifier;
-(void)setIntegerIdentifier:(long long)arg1 ;
-(id)initWithStringIdentifier:(id)arg1 integerIdentifier:(long long)arg2 ;
-(void)setStringIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

