/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)locations;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(id)succinctDescription;
-(void)setLocations:(NSArray *)arg1 ;
-(id)init;
-(void)configureLayer:(id)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)cgColors;
-(NSString *)description;
-(CGGradientRef)copyCGGradient;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

