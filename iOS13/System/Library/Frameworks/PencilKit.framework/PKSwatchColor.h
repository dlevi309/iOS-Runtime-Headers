/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class UIColor, NSString;

@interface PKSwatchColor : NSObject {

	UIColor* _color;
	NSString* _identifier;

}

@property (nonatomic,retain) UIColor * color;                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)swatchColor:(id)arg1 identifier:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 identifier:(id)arg2 ;
@end

