/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface PKSearchQuery : NSObject <NSSecureCoding> {

	unsigned long long _domain;
	NSString* _identifier;
	NSString* _keyboardLanguage;
	unsigned long long _type;
	NSString* _text;
	NSArray* _tokens;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * keyboardLanguage;              //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,readonly) unsigned long long domain; 
@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * tokens;                           //@synthesize tokens=_tokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTokens:(NSArray *)arg1 ;
-(NSArray *)tokens;
-(NSString *)keyboardLanguage;
-(id)tags;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)domain;
-(id)description;
-(NSString *)text;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dateToken;
-(NSString *)identifier;
-(BOOL)isEmpty;
-(id)personToken;
-(id)initWithIdentifier:(id)arg1 keyboardLanguage:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_groupTokenOfType:(unsigned long long)arg1 ;
-(id)categoryToken;
-(id)merchantToken;
-(id)locationTokens;
-(id)amountToken;
-(id)transactionTypes;
-(id)transactionStatuses;
-(id)transactionSources;
-(id)peerPaymentSubTypeToken;
-(id)rewardsToken;
@end

