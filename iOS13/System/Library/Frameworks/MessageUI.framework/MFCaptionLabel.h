/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UILabel.h>

@protocol MFCaptionLabelDataSource;
@class NSArray;

@interface MFCaptionLabel : UILabel {

	BOOL _needsLabelUpdate;
	id<MFCaptionLabelDataSource> _dataSource;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSArray* _fromSenders;
	NSArray* _otherSigners;

}

@property (assign,nonatomic,__weak) id<MFCaptionLabelDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * toRecipients;                                      //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,retain) NSArray * ccRecipients;                                      //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * bccRecipients;                                     //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * fromSenders;                                       //@synthesize fromSenders=_fromSenders - In the implementation block
@property (nonatomic,retain) NSArray * otherSigners;                                      //@synthesize otherSigners=_otherSigners - In the implementation block
+(id)attributedStringsCache;
-(void)setBounds:(CGRect)arg1 ;
-(id<MFCaptionLabelDataSource>)dataSource;
-(void)setDataSource:(id<MFCaptionLabelDataSource>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setToRecipients:(NSArray *)arg1 ;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(void)_setNeedsLabelUpdate;
-(void)updateLabelNow;
-(id)_formattedAttributedString;
-(id)_whitespaceStringWithWidth:(double)arg1 ;
-(id)_chevronAttributedString;
-(id)_chevronImage;
-(id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1 ;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(void)setFromSenders:(NSArray *)arg1 ;
-(void)setOtherSigners:(NSArray *)arg1 ;
-(NSArray *)fromSenders;
-(NSArray *)otherSigners;
@end

