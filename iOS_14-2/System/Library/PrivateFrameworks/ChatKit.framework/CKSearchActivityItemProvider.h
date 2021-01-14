/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPayload:(id)arg1 ;
-(id)item;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)payload;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg1 metadata:(id)arg2 ;
-(LPLinkMetadata *)metadata;
@end

