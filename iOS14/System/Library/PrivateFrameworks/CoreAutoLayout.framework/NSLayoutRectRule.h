/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
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
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setRelation:(long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSLayoutRect *)firstLayoutRect;
-(NSLayoutRect *)secondLayoutRect;
-(NSString *)identifier;
-(long long)relation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

