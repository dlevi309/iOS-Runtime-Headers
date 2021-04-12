/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)previewRetrievalQueue;
-(WFFileRepresentation *)file;
-(void)setFile:(WFFileRepresentation *)arg1 ;
-(void)setOriginalItem:(WFContentItem *)arg1 ;
-(WFContentItem *)item;
-(WFContentItem *)originalItem;
-(void)setItem:(WFContentItem *)arg1 ;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(id)refreshBlock;
-(void)setRefreshBlock:(id)arg1 ;
@end

