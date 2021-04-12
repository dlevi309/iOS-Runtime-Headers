/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UICollectionLayoutVFLParserItem : NSObject {

	NSString* _name;
	double _fraction;

}

@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double fraction;              //@synthesize fraction=_fraction - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setFraction:(double)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)_parseWithVisualFormat:(id)arg1 ;
-(double)_fractionForFractionTerm:(id)arg1 ;
-(id)initWithVisualFormat:(id)arg1 ;
-(id)initWithName:(id)arg1 fraction:(double)arg2 ;
-(double)fraction;
@end

