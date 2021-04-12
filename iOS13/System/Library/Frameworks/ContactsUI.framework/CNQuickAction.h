/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSString, UIColor, CNQuickActionsManager, UIImage, UIView, CNContactStyle;

@interface CNQuickAction : NSObject {

	BOOL _useDuetIfAvailable;
	BOOL _isLongPress;
	BOOL _enabled;
	BOOL _cached;
	BOOL _dismissesWithAnimation;
	NSString* _title;
	NSString* _category;
	UIColor* _imageTintColor;
	CNQuickActionsManager* _manager;
	NSString* _identifier;
	UIImage* _image;
	UIView* _sourceView;
	unsigned long long _score;
	/*^block*/id _performBlock;
	CNContactStyle* _previousStyle;

}

@property (assign,getter=isBackAction,nonatomic) BOOL backAction; 
@property (assign,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) CNQuickActionsManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSString * category;                                 //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * globalIdentifier; 
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                          //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) BOOL cached;                                         //@synthesize cached=_cached - In the implementation block
@property (assign,nonatomic) BOOL dismissesWithAnimation;                         //@synthesize dismissesWithAnimation=_dismissesWithAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) id performBlock;                                       //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,retain) CNContactStyle * previousStyle;                      //@synthesize previousStyle=_previousStyle - In the implementation block
@property (assign,nonatomic) BOOL useDuetIfAvailable;                             //@synthesize useDuetIfAvailable=_useDuetIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL isLongPress;                                    //@synthesize isLongPress=_isLongPress - In the implementation block
@property (nonatomic,retain) UIColor * imageTintColor;                            //@synthesize imageTintColor=_imageTintColor - In the implementation block
+(BOOL)reallyPerform;
+(id)defaultTitleForActionInCategory:(id)arg1 context:(long long)arg2 ;
+(id)possibleTitlesForActionsInCategories:(id)arg1 context:(long long)arg2 ;
+(id)actionWithTitle:(id)arg1 image:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)cancel;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)score;
-(CNQuickActionsManager *)manager;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setScore:(unsigned long long)arg1 ;
-(void)setManager:(CNQuickActionsManager *)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setImageTintColor:(UIColor *)arg1 ;
-(UIColor *)imageTintColor;
-(BOOL)isLongPress;
-(void)perform;
-(BOOL)useDuetIfAvailable;
-(void)setUseDuetIfAvailable:(BOOL)arg1 ;
-(id)_coreDuetValue;
-(id)_coreDuetInteractionMechanisms;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)globalIdentifier;
-(BOOL)matchesDuetInteraction:(id)arg1 ;
-(id)imageForContext:(long long)arg1 ;
-(id)defaultTitleForContext:(long long)arg1 ;
-(void)setIsLongPress:(BOOL)arg1 ;
-(BOOL)cached;
-(void)setCached:(BOOL)arg1 ;
-(BOOL)dismissesWithAnimation;
-(void)setDismissesWithAnimation:(BOOL)arg1 ;
-(id)performBlock;
-(void)setPerformBlock:(id)arg1 ;
-(CNContactStyle *)previousStyle;
-(void)setPreviousStyle:(CNContactStyle *)arg1 ;
-(BOOL)isBackAction;
-(void)setBackAction:(BOOL)arg1 ;
-(id)userActionType;
@end

