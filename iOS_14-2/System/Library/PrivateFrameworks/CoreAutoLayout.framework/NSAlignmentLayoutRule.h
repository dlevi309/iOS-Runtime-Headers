/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSArray, NSString;

@interface NSAlignmentLayoutRule : NSObject <NSLayoutRule> {

	NSArray* _alignedAnchors;

}

@property (copy,readonly) NSArray * alignedAnchors;                 //@synthesize alignedAnchors=_alignedAnchors - In the implementation block
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alignmentWithAnchors:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSArray *)alignedAnchors;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

