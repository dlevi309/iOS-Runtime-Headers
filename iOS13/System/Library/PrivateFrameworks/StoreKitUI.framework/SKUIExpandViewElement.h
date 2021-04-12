/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUIExpandViewElement : SKUIViewElement {

	BOOL _open;
	BOOL _previousIsOpen;

}

@property (getter=isOpen,nonatomic,readonly) BOOL open;              //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) BOOL previousIsOpen;                    //@synthesize previousIsOpen=_previousIsOpen - In the implementation block
-(BOOL)isOpen;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(BOOL)previousIsOpen;
-(void)setPreviousIsOpen:(BOOL)arg1 ;
@end

