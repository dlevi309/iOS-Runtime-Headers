/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class UIColor, NSString;

@interface PKSwatchColor : NSObject {

	UIColor* _color;
	NSString* _identifier;

}

@property (nonatomic,readonly) UIColor * color;                         //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)swatchColor:(id)arg1 identifier:(id)arg2 ;
-(UIColor *)color;
-(NSString *)identifier;
-(id)initWithColor:(id)arg1 identifier:(id)arg2 ;
@end

