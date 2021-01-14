/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPAlertDelegate.h>

@protocol CPAlertDelegate;
@class NSString, NSArray;

@interface CPActionSheetTemplate : CPTemplate <CPAlertDelegate> {

	NSString* _title;
	NSString* _message;
	NSArray* _actions;
	id<CPAlertDelegate> _alertDelegate;

}

@property (nonatomic,retain) id<CPAlertDelegate> alertDelegate;              //@synthesize alertDelegate=_alertDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                            //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)message;
-(NSArray *)actions;
-(id<CPAlertDelegate>)alertDelegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlertDelegate:(id<CPAlertDelegate>)arg1 ;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)handleAlertActionForIdentifier:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
@end

