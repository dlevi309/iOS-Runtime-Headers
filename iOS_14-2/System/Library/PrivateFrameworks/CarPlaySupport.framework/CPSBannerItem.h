/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol CPSBannerItemDelegate;
@class NSUUID, NSString, NSArray, CPImageSet;

@interface CPSBannerItem : NSObject {

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
-(id<CPSBannerItemDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<CPSBannerItemDelegate>)arg1 ;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(CPImageSet *)imageSet;
-(NSArray *)textVariants;
-(NSArray *)detailTextVariants;
-(NSArray *)attributedDetailTextVariants;
-(BOOL)isEqualToBannerItem:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 textVariants:(id)arg3 detailTextVariants:(id)arg4 attributedDetailTextVariants:(id)arg5 imageSet:(id)arg6 delegate:(id)arg7 ;
@end

