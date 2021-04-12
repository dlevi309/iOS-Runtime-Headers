/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
*/


#import <MobileLookup/MobileLookup-Structs.h>
@class NSURL, NSString, NSArray, NSDictionary, MLULookupItemContent;

@interface MLULookupItem : NSObject {

	NSURL* _url;
	DDResultRef _ddResult;
	NSString* _text;
	NSRange _focusRange;
	NSArray* _attachments;
	unsigned long long _currentAttachmentIndex;
	NSRange _proposedRange;
	BOOL _resolved;
	NSDictionary* _documentProperties;
	MLULookupItemContent* _previewContent;

}

@property (nonatomic,retain) MLULookupItemContent * previewContent;              //@synthesize previewContent=_previewContent - In the implementation block
@property (retain) NSDictionary * documentProperties;                            //@synthesize documentProperties=_documentProperties - In the implementation block
-(void)commit;
-(void)commitWithTransitionForPreviewViewController:(id)arg1 inViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)commitType;
-(id)initWithURL:(id)arg1 dataDetectorsResult:(DDResultRef)arg2 text:(id)arg3 range:(NSRange)arg4 ;
-(void)setDocumentProperties:(NSDictionary *)arg1 ;
-(id)initWithAttachments:(id)arg1 currentAttachment:(unsigned long long)arg2 ;
-(id)viewControllerToPresent;
-(BOOL)resolve;
-(void)dealloc;
-(void)setPreviewContent:(MLULookupItemContent *)arg1 ;
-(NSDictionary *)documentProperties;
-(BOOL)_resolveURL:(id)arg1 DDResult:(DDResultRef)arg2 focusRange:(NSRange)arg3 ;
-(BOOL)_resolveAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2 ;
-(BOOL)_resolveText:(id)arg1 focusRange:(NSRange)arg2 ;
-(MLULookupItemContent *)previewContent;
-(id)webUrlToPresent;
-(NSRange)proposedRange;
@end

