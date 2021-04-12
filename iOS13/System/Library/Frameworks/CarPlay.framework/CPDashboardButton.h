/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPControlDelegate;
@class NSUUID, NSArray, CPImageSet, UIImage, NSString;

@interface CPDashboardButton : NSObject <CPControl, NSSecureCoding> {

	NSUUID* _identifier;
	NSArray* _titleVariants;
	NSArray* _subtitleVariants;
	/*^block*/id _handler;
	CPImageSet* _imageSet;
	id<CPControlDelegate> _delegate;

}

@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) CPImageSet * imageSet;                              //@synthesize imageSet=_imageSet - In the implementation block
@property (assign,nonatomic,__weak) id<CPControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSArray * titleVariants;                          //@synthesize titleVariants=_titleVariants - In the implementation block
@property (nonatomic,readonly) NSArray * subtitleVariants;                       //@synthesize subtitleVariants=_subtitleVariants - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)handler;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CPControlDelegate>)delegate;
-(void)setDelegate:(id<CPControlDelegate>)arg1 ;
-(id)_init;
-(NSUUID *)identifier;
-(void)setHandler:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(UIImage *)image;
-(CPImageSet *)imageSet;
-(void)handlePrimaryAction;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(NSArray *)titleVariants;
-(NSArray *)subtitleVariants;
-(id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

