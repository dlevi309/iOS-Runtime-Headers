/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

