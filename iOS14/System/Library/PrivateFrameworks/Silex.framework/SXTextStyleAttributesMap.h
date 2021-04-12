/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSString, NSMutableArray;

@interface SXTextStyleAttributesMap : NSObject {

	NSString* _string;
	NSMutableArray* _attributes;

}

@property (nonatomic,readonly) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSMutableArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)initWithString:(id)arg1 ;
-(id)attributedString;
-(NSMutableArray *)attributes;
-(id)description;
-(void)addAttributes:(id)arg1 ;
-(NSString *)string;
-(id)attributesMapWithAttributesForRange:(NSRange)arg1 ;
@end

