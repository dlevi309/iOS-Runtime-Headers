/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSection.h>

@protocol HKDataMetadataDeletionSectionDelegate;
@class UITableViewCell, NSString;

@interface HKDataMetadataDeletionSection : HKDataMetadataSection {

	BOOL _enabled;
	id<HKDataMetadataDeletionSectionDelegate> _delegate;
	UITableViewCell* _cell;
	NSString* _title;

}

@property (nonatomic,retain) UITableViewCell * cell;                                                 //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataMetadataDeletionSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id<HKDataMetadataDeletionSectionDelegate>)delegate;
-(void)setDelegate:(id<HKDataMetadataDeletionSectionDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(id)initWithTitle:(id)arg1 ;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateCellForEnabledState;
@end

