/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDictionary;

@interface DIPage : NSObject <NSSecureCoding> {

	NSArray* _attributes;
	unsigned long long _page;
	NSString* _title;
	NSString* _subTitle;
	NSDictionary* _serverValidationGroup;

}

@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subTitle;                               //@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,copy) NSDictionary * serverValidationGroup;              //@synthesize serverValidationGroup=_serverValidationGroup - In the implementation block
@property (nonatomic,copy) NSArray * attributes;                              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) unsigned long long page;                         //@synthesize page=_page - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPage:(unsigned long long)arg1 ;
-(unsigned long long)page;
-(void)setAttributes:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subTitle;
-(void)setSubTitle:(NSString *)arg1 ;
-(NSArray *)attributes;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(id)initWithAttributes:(id)arg1 title:(id)arg2 subTitle:(id)arg3 page:(long long)arg4 ;
-(NSDictionary *)serverValidationGroup;
-(void)setServerValidationGroup:(NSDictionary *)arg1 ;
@end

