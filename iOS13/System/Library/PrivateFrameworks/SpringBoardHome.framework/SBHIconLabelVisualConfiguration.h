/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHIconLabelVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _fontSize;
	double _baselineOffsetFromImage;
	double _height;
	double _widthDelta;

}

@property (assign,nonatomic) double fontSize;                             //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double baselineOffsetFromImage;              //@synthesize baselineOffsetFromImage=_baselineOffsetFromImage - In the implementation block
@property (assign,nonatomic) double height;                               //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double widthDelta;                           //@synthesize widthDelta=_widthDelta - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setBaselineOffsetFromImage:(double)arg1 ;
-(void)setWidthDelta:(double)arg1 ;
-(double)baselineOffsetFromImage;
-(double)widthDelta;
@end

