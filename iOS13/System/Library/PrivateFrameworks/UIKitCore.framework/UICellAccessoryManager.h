/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UICellAccessoryLayout;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSDictionary, NSString, UIView, UICellAccessoryConfiguration, NSMutableDictionary;

@interface UICellAccessoryManager : NSObject {

	CGSize _enforcedContainerSize;
	BOOL _needsLayout;
	double _minimumCompressionLayoutWidth;
	id<UICellAccessoryLayout> _leadingLayout;
	id<UICellAccessoryLayout> _trailingLayout;
	NSDictionary* _configurations;
	NSString* _currentConfigurationIdentifier;
	UIView* _containerView;
	UICellAccessoryConfiguration* _previousConfiguration;
	NSMutableDictionary* _accessoryViews;
	CGSize _previousContainerSize;
	UIEdgeInsets _safeAreaInsets;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) UIView * containerView;                                      //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) BOOL needsLayout;                                                   //@synthesize needsLayout=_needsLayout - In the implementation block
@property (assign,nonatomic) CGSize previousContainerSize;                                       //@synthesize previousContainerSize=_previousContainerSize - In the implementation block
@property (nonatomic,retain) UICellAccessoryConfiguration * previousConfiguration;               //@synthesize previousConfiguration=_previousConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryViews;                               //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                        //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (assign,nonatomic) double minimumCompressionLayoutWidth;                               //@synthesize minimumCompressionLayoutWidth=_minimumCompressionLayoutWidth - In the implementation block
@property (nonatomic,retain) id<UICellAccessoryLayout> leadingLayout;                            //@synthesize leadingLayout=_leadingLayout - In the implementation block
@property (nonatomic,retain) id<UICellAccessoryLayout> trailingLayout;                           //@synthesize trailingLayout=_trailingLayout - In the implementation block
@property (nonatomic,retain) NSDictionary * configurations;                                      //@synthesize configurations=_configurations - In the implementation block
@property (nonatomic,copy) NSString * currentConfigurationIdentifier;                            //@synthesize currentConfigurationIdentifier=_currentConfigurationIdentifier - In the implementation block
@property (nonatomic,readonly) UICellAccessoryConfiguration * currentConfiguration; 
@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) UIEdgeInsets contentInset;                                        //@synthesize contentInset=_contentInset - In the implementation block
-(id)description;
-(CGRect)contentFrame;
-(CGSize)containerSize;
-(UIEdgeInsets)safeAreaInsets;
-(void)layoutIfNeeded;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setNeedsLayout;
-(BOOL)needsLayout;
-(UIEdgeInsets)contentInset;
-(id)initWithContainerView:(id)arg1 ;
-(void)setCurrentConfigurationIdentifier:(NSString *)arg1 ;
-(void)setLeadingLayout:(id<UICellAccessoryLayout>)arg1 ;
-(void)setTrailingLayout:(id<UICellAccessoryLayout>)arg1 ;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setConfigurations:(NSDictionary *)arg1 ;
-(void)updateContainerView:(id)arg1 ;
-(NSMutableDictionary *)accessoryViews;
-(void)setAccessoryViews:(NSMutableDictionary *)arg1 ;
-(void)performWithEnforcedContainerSize:(CGSize)arg1 block:(/*^block*/id)arg2 ;
-(UICellAccessoryConfiguration *)currentConfiguration;
-(NSDictionary *)configurations;
-(void)setMinimumCompressionLayoutWidth:(double)arg1 ;
-(id<UICellAccessoryLayout>)leadingLayout;
-(id<UICellAccessoryLayout>)trailingLayout;
-(id)_configurationWithIdentifier:(id)arg1 ;
-(CGRect)_updateAccessories:(id)arg1 previousAccessories:(id)arg2 withLayout:(id)arg3 edge:(unsigned long long)arg4 ;
-(CGRect)containerBounds;
-(double)minimumCompressionLayoutWidth;
-(void)_updateFromPreviousConfiguration:(id)arg1 ;
-(NSString *)currentConfigurationIdentifier;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(CGSize)previousContainerSize;
-(void)setPreviousContainerSize:(CGSize)arg1 ;
-(UICellAccessoryConfiguration *)previousConfiguration;
-(void)setPreviousConfiguration:(UICellAccessoryConfiguration *)arg1 ;
@end

