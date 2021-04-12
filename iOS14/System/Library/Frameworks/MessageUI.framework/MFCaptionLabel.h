/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UILabel.h>

@protocol MFCaptionLabelDataSource;
@class NSArray;

@interface MFCaptionLabel : UILabel {

	BOOL _needsLabelUpdate;
	BOOL _preventAutoUpdatingLabel;
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
@property (assign,nonatomic) BOOL preventAutoUpdatingLabel;                               //@synthesize preventAutoUpdatingLabel=_preventAutoUpdatingLabel - In the implementation block
+(id)attributedStringsCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(id<MFCaptionLabelDataSource>)dataSource;
-(void)setBounds:(CGRect)arg1 ;
-(void)_setNeedsLabelUpdate;
-(void)updateLabelNow;
-(BOOL)preventAutoUpdatingLabel;
-(id)_formattedAttributedString;
-(id)_whitespaceStringWithWidth:(double)arg1 ;
-(id)_chevronAttributedString;
-(id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1 ;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(void)setFromSenders:(NSArray *)arg1 ;
-(void)setOtherSigners:(NSArray *)arg1 ;
-(void)setPreventAutoUpdatingLabel:(BOOL)arg1 ;
-(NSArray *)fromSenders;
-(NSArray *)otherSigners;
-(void)setDataSource:(id<MFCaptionLabelDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setToRecipients:(NSArray *)arg1 ;
-(id)_chevronImage;
@end

