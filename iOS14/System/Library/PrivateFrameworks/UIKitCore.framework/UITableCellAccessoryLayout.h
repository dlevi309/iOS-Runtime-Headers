/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICellAccessoryLayout.h>

@class UICellAccessoryManager, NSDictionary, NSMutableDictionary, NSString;

@interface UITableCellAccessoryLayout : NSObject <UICellAccessoryLayout> {

	UICellAccessoryManager* _manager;
	unsigned long long _edge;
	double _safeAreaInset;
	/*^block*/id _standardLayoutWidthProvider;
	/*^block*/id _disclosureLayoutWidthProvider;
	/*^block*/id _spacingBlock;
	NSDictionary* _initialFrames;
	NSDictionary* _finalFrames;
	NSMutableDictionary* _initialAlphas;
	NSMutableDictionary* _finalAlphas;
	CGRect _totalFrame;

}

@property (assign,nonatomic) CGRect totalFrame;                                    //@synthesize totalFrame=_totalFrame - In the implementation block
@property (nonatomic,retain) NSDictionary * initialFrames;                         //@synthesize initialFrames=_initialFrames - In the implementation block
@property (nonatomic,retain) NSDictionary * finalFrames;                           //@synthesize finalFrames=_finalFrames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * initialAlphas;                  //@synthesize initialAlphas=_initialAlphas - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * finalAlphas;                    //@synthesize finalAlphas=_finalAlphas - In the implementation block
@property (nonatomic,readonly) double _standardLayoutWidth; 
@property (nonatomic,readonly) double _disclosureLayoutWidth; 
@property (nonatomic,copy) id spacingBlock;                                        //@synthesize spacingBlock=_spacingBlock - In the implementation block
@property (assign,nonatomic,__weak) UICellAccessoryManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) double safeAreaInset;                                 //@synthesize safeAreaInset=_safeAreaInset - In the implementation block
@property (assign,nonatomic) unsigned long long edge;                              //@synthesize edge=_edge - In the implementation block
@property (nonatomic,copy) id standardLayoutWidthProvider;                         //@synthesize standardLayoutWidthProvider=_standardLayoutWidthProvider - In the implementation block
@property (nonatomic,copy) id disclosureLayoutWidthProvider;                       //@synthesize disclosureLayoutWidthProvider=_disclosureLayoutWidthProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)edge;
-(NSMutableDictionary *)finalAlphas;
-(void)setEdge:(unsigned long long)arg1 ;
-(double)safeAreaInset;
-(void)setStandardLayoutWidthProvider:(id)arg1 ;
-(id)init;
-(id)_framesForAccessories:(id)arg1 withContainerSize:(CGSize)arg2 outTotalFrame:(CGRect*)arg3 ;
-(NSMutableDictionary *)initialAlphas;
-(void)setTotalFrame:(CGRect)arg1 ;
-(double)_standardLayoutWidth;
-(id)standardLayoutWidthProvider;
-(void)setManager:(UICellAccessoryManager *)arg1 ;
-(CGRect)endLayout;
-(id)spacingBlock;
-(NSDictionary *)finalFrames;
-(void)prepareLayoutForAccessories:(id)arg1 previousAccessories:(id)arg2 configurationIdentifier:(id)arg3 ;
-(CGRect)totalFrame;
-(double)_disclosureLayoutWidth;
-(double)_totalWidthForAccessories:(id)arg1 withContainerSize:(CGSize)arg2 ;
-(void)setSpacingBlock:(id)arg1 ;
-(id)disclosureLayoutWidthProvider;
-(void)setInitialAlphas:(NSMutableDictionary *)arg1 ;
-(void)setInitialFrames:(NSDictionary *)arg1 ;
-(NSDictionary *)initialFrames;
-(UICellAccessoryManager *)manager;
-(CGRect)_frameForAccessoryAtIndex:(unsigned long long)arg1 inAccessories:(id)arg2 containerSize:(CGSize)arg3 withXOrigin:(double*)arg4 ;
-(double)_layoutWidthForAccessory:(id)arg1 withItemWidth:(double)arg2 ;
-(void)setSafeAreaInset:(double)arg1 ;
-(void)setFinalFrames:(NSDictionary *)arg1 ;
-(CGRect)finalFrameForAccessory:(id)arg1 ;
-(double)initialAlphaForAccessory:(id)arg1 ;
-(void)setDisclosureLayoutWidthProvider:(id)arg1 ;
-(CGRect)initialFrameForAccessory:(id)arg1 ;
-(double)finalAlphaForAccessory:(id)arg1 ;
-(void)setFinalAlphas:(NSMutableDictionary *)arg1 ;
@end

