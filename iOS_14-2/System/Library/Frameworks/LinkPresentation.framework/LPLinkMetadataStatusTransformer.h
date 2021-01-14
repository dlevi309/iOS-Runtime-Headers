/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)originalURL;
-(NSAttributedString *)statusText;
-(id)initWithMetadata:(id)arg1 URL:(id)arg2 ;
-(id<LPLinkMetadataStatusTransformerDelegate>)delegate;
-(NSURL *)canonicalURL;
-(BOOL)wantsStatusItem;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(void)setDelegate:(id<LPLinkMetadataStatusTransformerDelegate>)arg1 ;
-(NSURL *)actionURL;
-(LPLinkMetadata *)metadata;
-(void)dealloc;
@end

