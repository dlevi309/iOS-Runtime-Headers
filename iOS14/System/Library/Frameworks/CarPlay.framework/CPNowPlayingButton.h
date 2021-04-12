/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPControlDelegate;
@class NSUUID, NSString;

@interface CPNowPlayingButton : NSObject <CPControl, NSSecureCoding> {

	BOOL _enabled;
	BOOL _selected;
	NSUUID* _identifier;
	/*^block*/id _handler;
	id<CPControlDelegate> _delegate;

}

@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) id<CPControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id<CPControlDelegate>)delegate;
-(void)setHandler:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDelegate:(id<CPControlDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)isEnabled;
-(NSUUID *)identifier;
-(id)handler;
-(void)handlePrimaryAction;
@end

