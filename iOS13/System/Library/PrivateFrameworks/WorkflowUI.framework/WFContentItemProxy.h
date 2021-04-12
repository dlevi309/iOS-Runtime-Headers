/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, WFContentItem, WFFileRepresentation;

@interface WFContentItemProxy : NSObject <QLPreviewItem> {

	WFContentItem* _item;
	WFContentItem* _originalItem;
	WFFileRepresentation* _file;
	/*^block*/id _refreshBlock;

}

@property (nonatomic,retain) WFFileRepresentation * file;                      //@synthesize file=_file - In the implementation block
@property (nonatomic,copy) id refreshBlock;                                    //@synthesize refreshBlock=_refreshBlock - In the implementation block
@property (assign,nonatomic,__weak) WFContentItem * item;                      //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) WFContentItem * originalItem;              //@synthesize originalItem=_originalItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(id)previewRetrievalQueue;
-(WFContentItem *)item;
-(void)setItem:(WFContentItem *)arg1 ;
-(WFFileRepresentation *)file;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(WFContentItem *)originalItem;
-(void)setOriginalItem:(WFContentItem *)arg1 ;
-(void)setFile:(WFFileRepresentation *)arg1 ;
-(id)refreshBlock;
-(void)setRefreshBlock:(id)arg1 ;
@end

