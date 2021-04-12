/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPNavigationAlertUpdating;
@class NSArray, CPImageSet, CPAlertAction, NSUUID, UIImage;

@interface CPNavigationAlert : NSObject <NSSecureCoding> {

	NSArray* _titleVariants;
	NSArray* _subtitleVariants;
	CPImageSet* _imageSet;
	CPAlertAction* _primaryAction;
	CPAlertAction* _secondaryAction;
	double _duration;
	NSUUID* _identifier;
	id<CPNavigationAlertUpdating> _navigationAlertUpdateTarget;

}

@property (nonatomic,retain) NSUUID * identifier;                                                           //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPNavigationAlertUpdating> navigationAlertUpdateTarget;              //@synthesize navigationAlertUpdateTarget=_navigationAlertUpdateTarget - In the implementation block
@property (nonatomic,copy,readonly) NSArray * titleVariants;                                                //@synthesize titleVariants=_titleVariants - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subtitleVariants;                                             //@synthesize subtitleVariants=_subtitleVariants - In the implementation block
@property (nonatomic,copy,readonly) CPImageSet * imageSet;                                                  //@synthesize imageSet=_imageSet - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image; 
@property (nonatomic,readonly) CPAlertAction * primaryAction;                                               //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,readonly) CPAlertAction * secondaryAction;                                             //@synthesize secondaryAction=_secondaryAction - In the implementation block
@property (nonatomic,readonly) double duration;                                                             //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(double)duration;
-(UIImage *)image;
-(CPImageSet *)imageSet;
-(NSArray *)titleVariants;
-(void)setNavigationAlertUpdateTarget:(id<CPNavigationAlertUpdating>)arg1 ;
-(CPAlertAction *)primaryAction;
-(CPAlertAction *)secondaryAction;
-(id)_initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 imageSet:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6 ;
-(id<CPNavigationAlertUpdating>)navigationAlertUpdateTarget;
-(NSArray *)subtitleVariants;
-(id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 imageSet:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6 ;
-(id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6 ;
-(void)updateTitleVariants:(id)arg1 subtitleVariants:(id)arg2 ;
@end

