/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRule : NSObject <NSLayoutRule> {

	NSArray* _stackedRects;
	NSLayoutRect* _containingRect;
	double _spacing;
	long long _orientation;

}

@property (copy,readonly) NSLayoutRect * containingRect;              //@synthesize containingRect=_containingRect - In the implementation block
@property (copy,readonly) NSArray * stackedRects;                     //@synthesize stackedRects=_stackedRects - In the implementation block
@property (readonly) double spacing;                                  //@synthesize spacing=_spacing - In the implementation block
@property (readonly) long long orientation;                           //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
+(id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4 ;
+(id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3 ;
+(id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)makeChildRules;
-(NSString *)ruleDescription;
-(long long)orientation;
-(NSArray *)stackedRects;
-(double)spacing;
-(id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 containingRect:(id)arg3 spacing:(double)arg4 ;
-(NSLayoutRect *)containingRect;
@end

