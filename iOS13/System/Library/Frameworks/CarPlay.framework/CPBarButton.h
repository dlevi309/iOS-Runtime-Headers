/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPBarButtonDelegate;
@class NSUUID, UIImage, NSString;

@interface CPBarButton : NSObject <CPControl, NSSecureCoding> {

	BOOL _enabled;
	NSUUID* _identifier;
	unsigned long long _buttonType;
	UIImage* _image;
	NSString* _title;
	/*^block*/id _handler;
	id<CPBarButtonDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long buttonType;                        //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,copy) id handler;                                             //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) id<CPBarButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSUUID * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)handler;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CPBarButtonDelegate>)delegate;
-(void)setDelegate:(id<CPBarButtonDelegate>)arg1 ;
-(id)_init;
-(NSUUID *)identifier;
-(void)setHandler:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(unsigned long long)buttonType;
-(void)setButtonType:(unsigned long long)arg1 ;
-(void)handlePrimaryAction;
-(id)initWithType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
@end

