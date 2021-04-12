/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UIImage, NSString;

@interface CPVoiceControlState : NSObject <NSSecureCoding> {

	BOOL _repeats;
	NSArray* _titleVariants;
	UIImage* _image;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSArray * titleVariants;              //@synthesize titleVariants=_titleVariants - In the implementation block
@property (nonatomic,readonly) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL repeats;                              //@synthesize repeats=_repeats - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)repeats;
-(UIImage *)image;
-(NSArray *)titleVariants;
-(id)initWithIdentifier:(id)arg1 titleVariants:(id)arg2 image:(id)arg3 repeats:(BOOL)arg4 ;
@end

