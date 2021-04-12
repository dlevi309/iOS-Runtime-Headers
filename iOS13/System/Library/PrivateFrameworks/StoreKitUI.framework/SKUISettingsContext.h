/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSMutableDictionary, NSMutableArray, SKUIClientContext;

@interface SKUISettingsContext : NSObject {

	NSMutableDictionary* _elementTypeClass;
	NSMutableArray* _descriptionReusePool;
	NSMutableArray* _viewReusePool;
	SKUIClientContext* _clientContext;

}

@property (assign,nonatomic,__weak) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)dequeueReusableSettingDescriptionForViewElement:(id)arg1 parent:(id)arg2 ;
-(void)recycleSettingDescriptions:(id)arg1 ;
-(void)_registerReuseClasses;
-(id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg1 forViewElement:(id)arg2 parent:(id)arg3 ;
-(void)_registerClass:(Class)arg1 forReuseIdentifier:(id)arg2 ;
@end

