/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSArray, NSString;

@interface NSAlignmentLayoutRule : NSObject <NSLayoutRule> {

	NSArray* _alignedAnchors;

}

@property (copy,readonly) NSArray * alignedAnchors;                 //@synthesize alignedAnchors=_alignedAnchors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
+(id)alignmentWithAnchors:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)makeChildRules;
-(NSString *)ruleDescription;
-(id)initWithAlignedAnchors:(id)arg1 ;
-(NSArray *)alignedAnchors;
@end

