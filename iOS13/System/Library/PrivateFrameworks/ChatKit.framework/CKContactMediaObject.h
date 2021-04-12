/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCardMediaObject.h>

@class CNContactVCardSummary, UIImage;

@interface CKContactMediaObject : CKCardMediaObject {

	BOOL _vCardParsingFailed;
	CNContactVCardSummary* _vCardSummary;
	UIImage* _vCardImage;

}

@property (nonatomic,retain) CNContactVCardSummary * vCardSummary;              //@synthesize vCardSummary=_vCardSummary - In the implementation block
@property (assign,nonatomic) BOOL vCardParsingFailed;                           //@synthesize vCardParsingFailed=_vCardParsingFailed - In the implementation block
@property (nonatomic,retain) UIImage * vCardImage;                              //@synthesize vCardImage=_vCardImage - In the implementation block
+(id)UTITypes;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
-(id)title;
-(id)subtitle;
-(int)mediaType;
-(id)icon;
-(BOOL)generatePreviewOutOfProcess;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(CGSize)bbSize;
-(CNContactVCardSummary *)vCardSummary;
-(id)vCardImageOfSize:(CGSize)arg1 ;
-(Class)previewBalloonViewClass;
-(Class)coloredBalloonViewClass;
-(void)setVCardSummary:(CNContactVCardSummary *)arg1 ;
-(BOOL)vCardParsingFailed;
-(void)setVCardParsingFailed:(BOOL)arg1 ;
-(UIImage *)vCardImage;
-(void)setVCardImage:(UIImage *)arg1 ;
@end

