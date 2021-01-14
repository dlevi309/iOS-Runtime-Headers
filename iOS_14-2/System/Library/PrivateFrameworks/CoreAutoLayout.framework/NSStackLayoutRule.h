/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
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
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3 ;
+(id)horizontalStackWithRects:(id)arg1 spacing:(double)arg2 ;
+(id)verticalStackWithRects:(id)arg1 spacing:(double)arg2 ;
-(double)spacing;
-(NSString *)description;
-(unsigned long long)hash;
-(long long)orientation;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSArray *)stackedRects;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

