/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSArray;

@interface _NSLexiconWord : NSObject {

	NSString* _token;
	NSArray* _parts;
	SCD_Struct_NS30 _attributes;

}

@property (nonatomic,readonly) SCD_Struct_NS30 attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSString * token;                   //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parts;                    //@synthesize parts=_parts - In the implementation block
-(NSArray *)parts;
-(SCD_Struct_NS30)attributes;
-(id)description;
-(NSString *)token;
-(void)dealloc;
@end

