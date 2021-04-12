/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(id)description;
-(id)initWithString:(id)arg1 ;
-(NSMutableArray *)attributes;
-(id)attributedString;
-(void)addAttributes:(id)arg1 ;
-(id)attributesMapWithAttributesForRange:(NSRange)arg1 ;
@end

