/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id<CPControlDelegate>)delegate;
-(void)setHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)setDelegate:(id<CPControlDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)handler;
-(CPImageSet *)imageSet;
-(void)handlePrimaryAction;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(NSArray *)titleVariants;
-(NSArray *)subtitleVariants;
-(id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

