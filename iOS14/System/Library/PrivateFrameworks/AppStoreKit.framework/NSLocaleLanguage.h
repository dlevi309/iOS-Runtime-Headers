/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@class NSString;

@interface NSLocaleLanguage : NSObject {

	NSString* _twoCharacterCode;
	NSString* _threeCharacterCode;

}

@property (copy) NSString * twoCharacterCode;                //@synthesize twoCharacterCode=_twoCharacterCode - In the implementation block
@property (copy) NSString * threeCharacterCode;              //@synthesize threeCharacterCode=_threeCharacterCode - In the implementation block
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTwoCharacterCode:(NSString *)arg1 ;
-(void)setThreeCharacterCode:(NSString *)arg1 ;
-(NSString *)twoCharacterCode;
-(NSString *)threeCharacterCode;
@end

