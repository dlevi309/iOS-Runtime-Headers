/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIImageViewElement;

@interface SKUIBrowseItemComponent : SKUIPageComponent {

	NSString* _title;
	NSString* _subtitle;
	long long _index;
	SKUIImageViewElement* _decorationImage;
	BOOL _showTopBorder;

}

@property (nonatomic,readonly) SKUIImageViewElement * decorationImage;              //@synthesize decorationImage=_decorationImage - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long index;                                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                                    //@synthesize showTopBorder=_showTopBorder - In the implementation block
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(NSString *)subtitle;
-(BOOL)showTopBorder;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(long long)componentType;
-(NSString *)title;
-(id)initWithViewElement:(id)arg1 ;
-(SKUIImageViewElement *)decorationImage;
@end

