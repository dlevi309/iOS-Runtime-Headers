/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSMutableArray *)titlesAssigned;
-(NSMutableArray *)statesAssigned;
@end

