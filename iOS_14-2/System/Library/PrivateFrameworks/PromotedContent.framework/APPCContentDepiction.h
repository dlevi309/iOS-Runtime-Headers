/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <libobjc.A.dylib/APPCPromotableContentDepiction.h>

@class NSString, NSArray;

@interface APPCContentDepiction : NSObject <APPCPromotableContentDepiction> {

	 identifier;
	 adjacentPosition;
	 placement;
	 language;
	 locale;
	 searchTerms;
	 keywords;
	 categories;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) unsigned long long adjacentPosition; 
@property (readonly,nonatomic) long long placement; 
@property (readonly,nonatomic) NSString * language; 
@property (readonly,nonatomic) NSString * locale; 
@property (readonly,nonatomic) NSArray * searchTerms; 
@property (readonly,nonatomic) NSArray * keywords; 
@property (readonly,nonatomic) NSArray * categories; 
-(long long)placement;
-(NSString *)locale;
-(id)init;
-(NSArray *)keywords;
-(NSArray *)categories;
-(NSArray *)searchTerms;
-(NSString *)identifier;
-(NSString *)language;
-(unsigned long long)adjacentPosition;
-(id)initWithIdentifier:(id)arg1 placement:(long long)arg2 language:(id)arg3 locale:(id)arg4 searchTerms:(id)arg5 keywords:(id)arg6 categories:(id)arg7 ;
-(id)initWithIdentifier:(id)arg1 adjacentPosition:(unsigned long long)arg2 placement:(long long)arg3 language:(id)arg4 locale:(id)arg5 searchTerms:(id)arg6 keywords:(id)arg7 categories:(id)arg8 ;
@end

