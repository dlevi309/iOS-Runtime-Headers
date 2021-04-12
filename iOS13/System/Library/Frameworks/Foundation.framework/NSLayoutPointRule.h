/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSLayoutPoint, NSString;

@interface NSLayoutPointRule : NSObject <NSLayoutRule> {

	NSLayoutPoint* _firstLayoutPoint;
	NSLayoutPoint* _secondLayoutPoint;

}

@property (copy,readonly) NSLayoutPoint * firstLayoutPoint;               //@synthesize firstLayoutPoint=_firstLayoutPoint - In the implementation block
@property (copy,readonly) NSLayoutPoint * secondLayoutPoint;              //@synthesize secondLayoutPoint=_secondLayoutPoint - In the implementation block
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
-(id)initWithFirstLayoutPoint:(id)arg1 secondLayoutPoint:(id)arg2 ;
-(NSLayoutPoint *)firstLayoutPoint;
-(NSLayoutPoint *)secondLayoutPoint;
@end

