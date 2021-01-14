/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSArray;

@interface _NSLexiconLemma : NSObject {

	NSString* _name;
	NSArray* _words;
	SCD_Struct_NS29 _attributes;

}

@property (nonatomic,readonly) SCD_Struct_NS29 attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * words;                    //@synthesize words=_words - In the implementation block
-(NSArray *)words;
-(id)replacementWordsForToken:(id)arg1 addingAttributes:(SCD_Struct_NS28)arg2 ;
-(NSString *)name;
-(SCD_Struct_NS29)attributes;
-(id)description;
-(void)dealloc;
@end

