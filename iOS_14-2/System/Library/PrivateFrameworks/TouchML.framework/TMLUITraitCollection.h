/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class UITraitCollection, NSMutableDictionary, NSMutableOrderedSet, NSString, NSArray, UIView;

@interface TMLUITraitCollection : NSObject {

	UITraitCollection* _traitCollection;
	id _subviewsValue;
	id _constraintsValue;
	NSMutableDictionary* _properties;
	NSMutableOrderedSet* _propertyKeys;
	long long _userInterfaceIdiom;
	double _displayScale;
	long long _horizontalSizeClass;
	long long _verticalSizeClass;
	long long _forceTouchCapability;
	NSString* _preferredContentSizeCategory;
	unsigned long long _specificity;
	NSArray* _preferredContentSizeCategories;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) unsigned long long specificity;                      //@synthesize specificity=_specificity - In the implementation block
@property (nonatomic,retain) NSArray * preferredContentSizeCategories;              //@synthesize preferredContentSizeCategories=_preferredContentSizeCategories - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;                          //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) double displayScale;                                   //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) long long horizontalSizeClass;                         //@synthesize horizontalSizeClass=_horizontalSizeClass - In the implementation block
@property (assign,nonatomic) long long verticalSizeClass;                           //@synthesize verticalSizeClass=_verticalSizeClass - In the implementation block
@property (assign,nonatomic) long long forceTouchCapability;                        //@synthesize forceTouchCapability=_forceTouchCapability - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                 //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSArray * subviews;                                      //@synthesize subviewsValue=_subviewsValue - In the implementation block
@property (nonatomic,copy) NSArray * constraints;                                   //@synthesize constraintsValue=_constraintsValue - In the implementation block
@property (nonatomic,readonly) UIView * view; 
+(id)traitEnvironment:(id)arg1 willTransitionToTraitCollection:(id)arg2 fromPreviousTraitCollection:(id)arg3 ;
+(id)defaultCollection;
+(id)currentTraitCollection:(id)arg1 ;
-(NSArray *)constraints;
-(long long)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(UITraitCollection *)traitCollection;
-(double)displayScale;
-(id)init;
-(NSArray *)subviews;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(long long)forceTouchCapability;
-(NSString *)preferredContentSizeCategory;
-(long long)verticalSizeClass;
-(void)setVerticalSizeClass:(long long)arg1 ;
-(long long)horizontalSizeClass;
-(unsigned long long)specificity;
-(void)tmlDispose;
-(void)setHorizontalSizeClass:(long long)arg1 ;
-(void)setTMLValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setSubviews:(NSArray *)arg1 ;
-(NSArray *)preferredContentSizeCategories;
-(void)applyToTraitEnvironment:(id)arg1 ;
-(void)setForceTouchCapability:(long long)arg1 ;
-(void)setPreferredContentSizeCategories:(NSArray *)arg1 ;
@end

