/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)uniqueIdentifier;
-(NSIndexSet *)events;
-(id)initWithTestRecipe:(id)arg1 domainInfo:(id)arg2 ;
-(NSString *)recipeDescription;
@end

