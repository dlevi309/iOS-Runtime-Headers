/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, TPSAssets;

@interface TPSContent : TPSSerializableObject <NSCopying, NSSecureCoding> {

	BOOL _bodyContainsLink;
	long long _labelStyle;
	NSString* _title;
	NSArray* _titleContent;
	NSArray* _bodyContent;
	NSString* _bodyText;
	TPSAssets* _assets;

}

@property (assign,nonatomic) BOOL bodyContainsLink;              //@synthesize bodyContainsLink=_bodyContainsLink - In the implementation block
@property (assign,nonatomic) long long labelStyle;               //@synthesize labelStyle=_labelStyle - In the implementation block
@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * titleContent;               //@synthesize titleContent=_titleContent - In the implementation block
@property (nonatomic,copy) NSArray * bodyContent;                //@synthesize bodyContent=_bodyContent - In the implementation block
@property (nonatomic,copy) NSString * bodyText;                  //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,copy) TPSAssets * assets;                   //@synthesize assets=_assets - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)na_identity;
-(TPSAssets *)assets;
-(long long)labelStyle;
-(NSString *)bodyText;
-(void)setLabelStyle:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(NSArray *)titleContent;
-(BOOL)bodyContainsLink;
-(NSArray *)bodyContent;
-(void)setBodyText:(NSString *)arg1 ;
-(id)description;
-(void)setTitleContent:(NSArray *)arg1 ;
-(void)setBodyContent:(NSArray *)arg1 ;
-(void)setBodyContainsLink:(BOOL)arg1 ;
-(void)setAssets:(TPSAssets *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

