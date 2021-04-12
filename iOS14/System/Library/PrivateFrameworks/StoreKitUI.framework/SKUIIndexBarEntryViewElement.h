/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIViewElement;

@interface SKUIIndexBarEntryViewElement : SKUIViewElement {

	NSString* _targetIndexBarEntryID;
	long long _visibilityPriority;

}

@property (nonatomic,readonly) SKUIViewElement * childElement; 
@property (nonatomic,copy,readonly) NSString * targetIndexBarEntryID;              //@synthesize targetIndexBarEntryID=_targetIndexBarEntryID - In the implementation block
@property (nonatomic,readonly) long long visibilityPriority;                       //@synthesize visibilityPriority=_visibilityPriority - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)visibilityPriority;
-(SKUIViewElement *)childElement;
-(NSString *)targetIndexBarEntryID;
@end

