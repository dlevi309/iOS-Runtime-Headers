/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 category:(id)arg3 ;
@end

