/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITableViewCell *)cell;
-(id)initWithTitle:(id)arg1 ;
-(id)init;
-(void)setCell:(UITableViewCell *)arg1 ;
-(id<HKDataMetadataDeletionSectionDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDelegate:(id<HKDataMetadataDeletionSectionDelegate>)arg1 ;
-(BOOL)isEnabled;
-(NSString *)title;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateCellForEnabledState;
@end

