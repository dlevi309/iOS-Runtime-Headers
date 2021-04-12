/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@protocol LPLinkMetadataStatusTransformerDelegate;
@class LPLinkMetadata, NSURL, NSAttributedString;

@interface LPLinkMetadataStatusTransformer : NSObject {

	LPLinkMetadata* _metadata;
	NSURL* _URL;
	BOOL _wantsStatusItem;
	id<LPLinkMetadataStatusTransformerDelegate> _delegate;

}

@property (nonatomic,retain) LPLinkMetadata * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<LPLinkMetadataStatusTransformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL wantsStatusItem;                                                   //@synthesize wantsStatusItem=_wantsStatusItem - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * statusText; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSURL * canonicalURL; 
-(void)dealloc;
-(id<LPLinkMetadataStatusTransformerDelegate>)delegate;
-(void)setDelegate:(id<LPLinkMetadataStatusTransformerDelegate>)arg1 ;
-(id)originalURL;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(id)initWithMetadata:(id)arg1 URL:(id)arg2 ;
-(NSAttributedString *)statusText;
-(NSURL *)actionURL;
-(NSURL *)canonicalURL;
-(BOOL)wantsStatusItem;
@end

