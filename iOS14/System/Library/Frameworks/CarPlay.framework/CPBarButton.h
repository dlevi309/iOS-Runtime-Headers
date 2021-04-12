/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPBarButtonDelegate;
@class NSUUID, UIImage, NSString;

@interface CPBarButton : NSObject <CPControl, NSSecureCoding> {

	BOOL _enabled;
	NSUUID* _identifier;
	long long _buttonStyle;
	UIImage* _image;
	NSString* _title;
	unsigned long long _buttonType;
	/*^block*/id _handler;
	id<CPBarButtonDelegate> _delegate;

}

@property (nonatomic,copy) id handler;                                             //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) id<CPBarButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long buttonStyle;                                //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long buttonType;                      //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setImage:(UIImage *)arg1 ;
-(id<CPBarButtonDelegate>)delegate;
-(void)setHandler:(id)arg1 ;
-(void)setButtonStyle:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setDelegate:(id<CPBarButtonDelegate>)arg1 ;
-(NSString *)description;
-(long long)buttonStyle;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)isEnabled;
-(NSUUID *)identifier;
-(id)handler;
-(unsigned long long)buttonType;
-(NSString *)title;
-(void)handlePrimaryAction;
-(void)handlePressesStart;
-(void)handlePressesEnd;
-(id)initWithImage:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
@end

