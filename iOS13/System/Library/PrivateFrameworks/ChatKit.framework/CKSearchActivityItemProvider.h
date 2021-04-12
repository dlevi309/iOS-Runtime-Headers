/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class LPLinkMetadata;

@interface CKSearchActivityItemProvider : UIActivityItemProvider {

	id _payload;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,retain) id payload;                             //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)item;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)setPayload:(id)arg1 ;
-(id)payload;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg1 metadata:(id)arg2 ;
@end

