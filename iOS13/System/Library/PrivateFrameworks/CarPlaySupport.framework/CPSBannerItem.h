/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <SpringBoardUI/SBUIBannerItem.h>

@protocol CPSBannerItemDelegate;
@class NSUUID, NSString, NSArray, CPImageSet;

@interface CPSBannerItem : SBUIBannerItem {

	NSUUID* _identifier;
	NSString* _bundleIdentifier;
	NSArray* _textVariants;
	NSArray* _detailTextVariants;
	NSArray* _attributedDetailTextVariants;
	CPImageSet* _imageSet;
	id<CPSBannerItemDelegate> _delegate;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPSBannerItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * textVariants;                               //@synthesize textVariants=_textVariants - In the implementation block
@property (nonatomic,readonly) NSArray * detailTextVariants;                         //@synthesize detailTextVariants=_detailTextVariants - In the implementation block
@property (nonatomic,readonly) NSArray * attributedDetailTextVariants;               //@synthesize attributedDetailTextVariants=_attributedDetailTextVariants - In the implementation block
@property (nonatomic,readonly) CPImageSet * imageSet;                                //@synthesize imageSet=_imageSet - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id<CPSBannerItemDelegate>)delegate;
-(void)setDelegate:(id<CPSBannerItemDelegate>)arg1 ;
-(NSUUID *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(/*^block*/id)action;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isSticky;
-(CPImageSet *)imageSet;
-(NSArray *)textVariants;
-(NSArray *)attributedDetailTextVariants;
-(NSArray *)detailTextVariants;
-(BOOL)isEqualToBannerItem:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 textVariants:(id)arg3 detailTextVariants:(id)arg4 attributedDetailTextVariants:(id)arg5 imageSet:(id)arg6 delegate:(id)arg7 ;
@end

