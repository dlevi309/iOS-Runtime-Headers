/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSArray, NSString;

@interface NSStackLayoutRule : NSObject <NSLayoutRule> {

	NSArray* _stackedRects;
	double _spacing;
	long long _orientation;

}

@property (copy,readonly) NSArray * stackedRects;                   //@synthesize stackedRects=_stackedRects - In the implementation block
@property (readonly) double spacing;                                //@synthesize spacing=_spacing - In the implementation block
@property (readonly) long long orientation;                         //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
+(id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3 ;
+(id)horizontalStackWithRects:(id)arg1 spacing:(double)arg2 ;
+(id)verticalStackWithRects:(id)arg1 spacing:(double)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)makeChildRules;
-(NSString *)ruleDescription;
-(id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3 ;
-(long long)orientation;
-(NSArray *)stackedRects;
-(double)spacing;
@end

