/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCardMediaObject.h>

@class NSDictionary, CNContactVCardSummary, UIImage;

@interface CKContactMediaObject : CKCardMediaObject {

	BOOL _vCardParsingFailed;
	NSDictionary* _contactMediaInfo;
	unsigned long long _oopPreviewRequestCount;
	CNContactVCardSummary* _vCardSummary;
	UIImage* _vCardImage;

}

@property (nonatomic,retain) NSDictionary * contactMediaInfo;                        //@synthesize contactMediaInfo=_contactMediaInfo - In the implementation block
@property (assign,nonatomic) unsigned long long oopPreviewRequestCount;              //@synthesize oopPreviewRequestCount=_oopPreviewRequestCount - In the implementation block
@property (nonatomic,retain) CNContactVCardSummary * vCardSummary;                   //@synthesize vCardSummary=_vCardSummary - In the implementation block
@property (assign,nonatomic) BOOL vCardParsingFailed;                                //@synthesize vCardParsingFailed=_vCardParsingFailed - In the implementation block
@property (nonatomic,retain) UIImage * vCardImage;                                   //@synthesize vCardImage=_vCardImage - In the implementation block
+(id)fallbackFilenamePrefix;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)UTITypes;
-(CGSize)bbSize;
-(int)mediaType;
-(BOOL)generatePreviewOutOfProcess;
-(unsigned long long)oopPreviewRequestCount;
-(void)setOopPreviewRequestCount:(unsigned long long)arg1 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(UIImage *)vCardImage;
-(CNContactVCardSummary *)vCardSummary;
-(BOOL)supportsBlastDoor;
-(NSDictionary *)contactMediaInfo;
-(void)setVCardImage:(UIImage *)arg1 ;
-(id)vCardImageOfSize:(CGSize)arg1 ;
-(id)previewCacheKey;
-(id)previewDispatchCache;
-(id)_transcodeControllerSharedInstance;
-(id)contactCardPayloadFileURL:(id)arg1 ;
-(void)generateOOPPreview;
-(Class)previewBalloonViewClass;
-(Class)coloredBalloonViewClass;
-(void)setContactMediaInfo:(NSDictionary *)arg1 ;
-(void)setVCardSummary:(CNContactVCardSummary *)arg1 ;
-(BOOL)vCardParsingFailed;
-(void)setVCardParsingFailed:(BOOL)arg1 ;
-(id)icon;
-(id)subtitle;
-(id)metricsCollectorMediaType;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(id)title;
@end

