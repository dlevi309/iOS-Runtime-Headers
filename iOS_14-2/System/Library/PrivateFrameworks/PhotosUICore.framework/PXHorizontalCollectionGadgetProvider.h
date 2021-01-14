/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXGadgetProviderDelegate.h>
#import <libobjc.A.dylib/PXHorizontalCollectionGadgetDelegate.h>

@class PXHorizontalCollectionGadget, NSString, NSDictionary, PXGadgetProvider;

@interface PXHorizontalCollectionGadgetProvider : PXGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate> {

	PXHorizontalCollectionGadget* _horizontalGadget;
	BOOL _hasLoaded;
	Class _horizontalCollectionGadgetClass;
	BOOL _prefersPagingEnabled;
	BOOL _isFixedHeight;
	NSString* _title;
	unsigned long long _gadgetType;
	unsigned long long _headerStyle;
	long long _defaultColumnSpan;
	NSDictionary* _columnSpanForTraitCollection;
	PXGadgetProvider* _contentGadgetProvider;

}

@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long gadgetType;                           //@synthesize gadgetType=_gadgetType - In the implementation block
@property (assign,nonatomic) unsigned long long headerStyle;                          //@synthesize headerStyle=_headerStyle - In the implementation block
@property (assign,nonatomic) long long defaultColumnSpan;                             //@synthesize defaultColumnSpan=_defaultColumnSpan - In the implementation block
@property (nonatomic,copy) NSDictionary * columnSpanForTraitCollection;               //@synthesize columnSpanForTraitCollection=_columnSpanForTraitCollection - In the implementation block
@property (assign,nonatomic) BOOL prefersPagingEnabled;                               //@synthesize prefersPagingEnabled=_prefersPagingEnabled - In the implementation block
@property (assign,nonatomic) BOOL isFixedHeight;                                      //@synthesize isFixedHeight=_isFixedHeight - In the implementation block
@property (nonatomic,readonly) PXGadgetProvider * contentGadgetProvider;              //@synthesize contentGadgetProvider=_contentGadgetProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateGadgets;
-(unsigned long long)gadgetType;
-(id)init;
-(void)setPrefersPagingEnabled:(BOOL)arg1 ;
-(void)loadDataForGadgets;
-(BOOL)prefersPagingEnabled;
-(void)setGadgetType:(unsigned long long)arg1 ;
-(long long)defaultColumnSpan;
-(void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg1 ;
-(id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3 ;
-(void)setColumnSpanForTraitCollection:(NSDictionary *)arg1 ;
-(void)_updateHorizontalGadget;
-(id)_createHorizontalGadget;
-(BOOL)isFixedHeight;
-(NSDictionary *)columnSpanForTraitCollection;
-(void)setIsFixedHeight:(BOOL)arg1 ;
-(PXGadgetProvider *)contentGadgetProvider;
-(void)resetPriorityDate;
-(id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)setHeaderStyle:(unsigned long long)arg1 ;
-(void)setDefaultColumnSpan:(long long)arg1 ;
-(void)loadDataForPriority;
-(void)invalidateGadgets;
-(unsigned long long)headerStyle;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)title;
@end

