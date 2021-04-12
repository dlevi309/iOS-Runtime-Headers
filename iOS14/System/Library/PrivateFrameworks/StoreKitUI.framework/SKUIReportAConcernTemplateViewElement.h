/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSURL, NSString, NSArray;

@interface SKUIReportAConcernTemplateViewElement : SKUIViewElement {

	NSURL* _reportConcernURL;
	long long _itemIdentifier;
	NSString* _reportConcernExplanation;

}

@property (nonatomic,copy,readonly) NSURL * reportConcernURL;                         //@synthesize reportConcernURL=_reportConcernURL - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * reportConcernExplanation;              //@synthesize reportConcernExplanation=_reportConcernExplanation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reasonElements; 
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSURL *)reportConcernURL;
-(NSString *)reportConcernExplanation;
-(NSArray *)reasonElements;
@end

