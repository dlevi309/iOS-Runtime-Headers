/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSString;

@interface SBFGradient : NSObject <NSCopying, NSSecureCoding, BSDescriptionProviding> {

	NSArray* _colors;
	NSArray* _locations;
	NSString* _type;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,copy) NSArray * colors;                        //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy) NSArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) CGPoint startPoint;                    //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) CGPoint endPoint;                      //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(void)configureLayer:(id)arg1 ;
-(CGGradientRef)copyCGGradient;
-(id)cgColors;
@end

