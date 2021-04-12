/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPControlDelegate;
@class NSUUID, NSString;

@interface CPTextButton : NSObject <CPControl, NSSecureCoding> {

	BOOL _enabled;
	NSUUID* _identifier;
	NSString* _title;
	long long _textStyle;
	/*^block*/id _handler;
	id<CPControlDelegate> _delegate;

}

@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) id<CPControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long textStyle;                                //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id<CPControlDelegate>)delegate;
-(void)setHandler:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(void)setDelegate:(id<CPControlDelegate>)arg1 ;
-(NSString *)description;
-(long long)textStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)isEnabled;
-(NSUUID *)identifier;
-(id)handler;
-(NSString *)title;
-(void)handlePrimaryAction;
-(void)handlePressesStart;
-(void)handlePressesEnd;
-(id)initWithTitle:(id)arg1 textStyle:(long long)arg2 handler:(/*^block*/id)arg3 ;
@end

