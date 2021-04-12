/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface NTKPillView : UIView {

	NSArray* _pillColors;
	unsigned long long _colorLimitCount;

}

@property (nonatomic,copy) NSArray * pillColors;                              //@synthesize pillColors=_pillColors - In the implementation block
@property (assign,nonatomic) unsigned long long colorLimitCount;              //@synthesize colorLimitCount=_colorLimitCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setPillColors:(NSArray *)arg1 ;
-(NSArray *)pillColors;
-(unsigned long long)colorLimitCount;
-(void)setColorLimitCount:(unsigned long long)arg1 ;
@end

