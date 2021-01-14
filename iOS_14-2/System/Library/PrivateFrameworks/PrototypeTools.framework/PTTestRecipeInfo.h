/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSIndexSet;

@interface PTTestRecipeInfo : NSObject <NSSecureCoding> {

	NSString* _uniqueIdentifier;
	NSString* _domainIdentifier;
	NSString* _title;
	NSIndexSet* _events;
	NSString* _recipeDescription;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * domainIdentifier;               //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSIndexSet * events;                       //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSString * recipeDescription;              //@synthesize recipeDescription=_recipeDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainIdentifier;
-(id)initWithTestRecipe:(id)arg1 domainInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSIndexSet *)events;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)recipeDescription;
@end

