/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface UICollectionLayoutListConfiguration : NSObject <NSCopying> {

	BOOL _showsSeparators;
	long long _appearance;
	UIColor* _backgroundColor;
	/*^block*/id _leadingSwipeActionsConfigurationProvider;
	/*^block*/id _trailingSwipeActionsConfigurationProvider;
	long long _headerMode;
	long long _footerMode;

}

@property (nonatomic,readonly) long long appearance;                                  //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic) BOOL showsSeparators;                                    //@synthesize showsSeparators=_showsSeparators - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) id leadingSwipeActionsConfigurationProvider;               //@synthesize leadingSwipeActionsConfigurationProvider=_leadingSwipeActionsConfigurationProvider - In the implementation block
@property (nonatomic,copy) id trailingSwipeActionsConfigurationProvider;              //@synthesize trailingSwipeActionsConfigurationProvider=_trailingSwipeActionsConfigurationProvider - In the implementation block
@property (assign,nonatomic) long long headerMode;                                    //@synthesize headerMode=_headerMode - In the implementation block
@property (assign,nonatomic) long long footerMode;                                    //@synthesize footerMode=_footerMode - In the implementation block
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)_spiConfiguration;
-(long long)footerMode;
-(void)setShowsSeparators:(BOOL)arg1 ;
-(id)initWithAppearance:(long long)arg1 ;
-(id)trailingSwipeActionsConfigurationProvider;
-(id)leadingSwipeActionsConfigurationProvider;
-(long long)appearance;
-(void)setLeadingSwipeActionsConfigurationProvider:(id)arg1 ;
-(void)setTrailingSwipeActionsConfigurationProvider:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeaderMode:(long long)arg1 ;
-(void)setFooterMode:(long long)arg1 ;
-(long long)headerMode;
-(BOOL)showsSeparators;
@end

