/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContentItem:(id)arg1 ;
-(PKPaymentContentItem *)contentItem;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

