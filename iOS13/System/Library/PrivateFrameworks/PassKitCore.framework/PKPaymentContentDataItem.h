/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem {

	PKPaymentContentItem* _contentItem;

}

@property (nonatomic,readonly) PKPaymentContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
+(long long)dataType;
+(BOOL)supportsMultipleItems;
-(PKPaymentContentItem *)contentItem;
-(id)initWithContentItem:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

