/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSTip.h>

@class NSAttributedString, NSString, NSDictionary;

@interface TPSDiscoverabilityTip : TPSTip {

	NSAttributedString* _attributedString;
	NSString* _userLanguageCode;
	NSDictionary* _preconditions;

}

@property (nonatomic,copy) NSString * userLanguageCode;                          //@synthesize userLanguageCode=_userLanguageCode - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSDictionary * preconditions;                         //@synthesize preconditions=_preconditions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(NSAttributedString *)attributedString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setUserLanguageCode:(NSString *)arg1 ;
-(void)setPreconditions:(NSDictionary *)arg1 ;
-(NSString *)userLanguageCode;
-(NSDictionary *)preconditions;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

