/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSLayoutRect, NSString;

@interface NSLayoutRectRule : NSObject <NSLayoutRule> {

	NSLayoutRect* _firstLayoutRect;
	NSLayoutRect* _secondLayoutRect;
	long long _relation;

}

@property (copy,readonly) NSLayoutRect * firstLayoutRect;               //@synthesize firstLayoutRect=_firstLayoutRect - In the implementation block
@property (copy,readonly) NSLayoutRect * secondLayoutRect;              //@synthesize secondLayoutRect=_secondLayoutRect - In the implementation block
@property (assign) long long relation;                                  //@synthesize relation=_relation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)makeChildRules;
-(NSString *)ruleDescription;
-(long long)relation;
-(id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 relation:(long long)arg3 ;
-(id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 ;
-(NSLayoutRect *)firstLayoutRect;
-(NSLayoutRect *)secondLayoutRect;
-(void)setRelation:(long long)arg1 ;
@end

