/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSString, NSDictionary;

@interface RKResponse : NSObject {

	NSString* _string;
	NSDictionary* _attributes;
	NSString* _category;

}

@property (retain) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSString * category;                    //@synthesize category=_category - In the implementation block
-(void)setCategory:(NSString *)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)category;
-(NSDictionary *)attributes;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 category:(id)arg3 ;
@end

