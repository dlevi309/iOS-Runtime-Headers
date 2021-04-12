/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNMeCardSharingSectionDataSource.h>

@protocol CNMeCardSharingEnabledDelegate;
@class UISwitch, NSArray, NSString;

@interface CNMeCardSharingEnabledDataSource : NSObject <CNMeCardSharingSectionDataSource> {

	BOOL _sharingEnabled;
	id<CNMeCardSharingEnabledDelegate> _delegate;
	UISwitch* _enabledSwitch;
	NSArray* _items;

}

@property (nonatomic,retain) UISwitch * enabledSwitch;                                        //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                 //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingEnabledDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL sharingEnabled;                                             //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfItems;
-(id<CNMeCardSharingEnabledDelegate>)delegate;
-(UISwitch *)enabledSwitch;
-(NSArray *)items;
-(void)setDelegate:(id<CNMeCardSharingEnabledDelegate>)arg1 ;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)supportsSelection;
-(id)sectionHeaderLabel;
-(id)sectionFooterLabel;
-(id)itemForIndex:(unsigned long long)arg1 ;
-(void)buildItems;
-(id)initWithSharingEnabled:(BOOL)arg1 ;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(void)didToggleEnabledSwitch:(id)arg1 ;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
-(BOOL)sharingEnabled;
@end

