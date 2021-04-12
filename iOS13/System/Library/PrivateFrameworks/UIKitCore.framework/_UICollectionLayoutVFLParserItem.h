/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UICollectionLayoutVFLParserItem : NSObject {

	NSString* _name;
	double _fraction;

}

@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double fraction;              //@synthesize fraction=_fraction - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)_parseWithVisualFormat:(id)arg1 ;
-(double)_fractionForFractionTerm:(id)arg1 ;
-(id)initWithVisualFormat:(id)arg1 ;
-(id)initWithName:(id)arg1 fraction:(double)arg2 ;
-(double)fraction;
-(void)setFraction:(double)arg1 ;
@end

