/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)displayedProgress;
@end

