/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIFont, UISwitch, NSArray;

@interface UIInputSwitcherItem : NSObject {

	BOOL _usesDeviceLanguage;
	NSString* _identifier;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	UISwitch* _switchControl;
	/*^block*/id _switchIsOnBlock;
	/*^block*/id _switchToggleBlock;
	long long _selectedSegmentIndex;
	NSArray* _segmentTitles;
	NSArray* _segmentImages;
	/*^block*/id _persistentSelectedIndex;

}

@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                     //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                  //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                          //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFont;                       //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (assign,nonatomic) BOOL usesDeviceLanguage;                     //@synthesize usesDeviceLanguage=_usesDeviceLanguage - In the implementation block
@property (nonatomic,retain) UISwitch * switchControl;                    //@synthesize switchControl=_switchControl - In the implementation block
@property (nonatomic,copy) id switchIsOnBlock;                            //@synthesize switchIsOnBlock=_switchIsOnBlock - In the implementation block
@property (nonatomic,copy) id switchToggleBlock;                          //@synthesize switchToggleBlock=_switchToggleBlock - In the implementation block
@property (nonatomic,readonly) BOOL isSegmentedItem; 
@property (assign,nonatomic) long long selectedSegmentIndex;              //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,retain) NSArray * segmentTitles;                     //@synthesize segmentTitles=_segmentTitles - In the implementation block
@property (nonatomic,retain) NSArray * segmentImages;                     //@synthesize segmentImages=_segmentImages - In the implementation block
@property (nonatomic,copy) id persistentSelectedIndex;                    //@synthesize persistentSelectedIndex=_persistentSelectedIndex - In the implementation block
+(id)switcherItemWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedSubtitle;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(long long)selectedSegmentIndex;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(void)setSwitchControl:(UISwitch *)arg1 ;
-(UISwitch *)switchControl;
-(void)setSegmentTitles:(NSArray *)arg1 ;
-(void)setSegmentImages:(NSArray *)arg1 ;
-(NSArray *)segmentTitles;
-(NSArray *)segmentImages;
-(void)setPersistentSelectedIndex:(id)arg1 ;
-(void)setSwitchIsOnBlock:(id)arg1 ;
-(void)setSwitchToggleBlock:(id)arg1 ;
-(BOOL)isSegmentedItem;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIFont *)subtitleFont;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(BOOL)usesDeviceLanguage;
-(void)setUsesDeviceLanguage:(BOOL)arg1 ;
-(id)switchIsOnBlock;
-(id)switchToggleBlock;
-(id)persistentSelectedIndex;
@end

