/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@interface PMRoundProgressView : UIView {

	double _progress;

}

@property (assign,nonatomic) double progress;                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) double displayedProgress; 
+(Class)layerClass;
-(id)initWithCoder:(id)arg1 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)displayedProgress;
@end

