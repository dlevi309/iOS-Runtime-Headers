/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNContactQuickActionPresentation.h>

@class NSString, NSMutableArray;

@interface CNTestQuickActionView : UIView <CNContactQuickActionPresentation> {

	BOOL _enabled;
	NSString* _title;
	NSMutableArray* _titlesAssigned;
	NSMutableArray* _statesAssigned;

}

@property (nonatomic,readonly) NSMutableArray * titlesAssigned;              //@synthesize titlesAssigned=_titlesAssigned - In the implementation block
@property (nonatomic,readonly) NSMutableArray * statesAssigned;              //@synthesize statesAssigned=_statesAssigned - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(NSMutableArray *)titlesAssigned;
-(NSMutableArray *)statesAssigned;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

