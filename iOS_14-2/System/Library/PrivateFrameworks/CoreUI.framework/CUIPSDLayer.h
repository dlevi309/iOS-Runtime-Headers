/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@class NSString;

@interface CUIPSDLayer : NSObject {

	double _opacity;
	int _blendMode;
	NSString* _name;

}

@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(int)blendMode;
-(id)init;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(void)dealloc;
@end

