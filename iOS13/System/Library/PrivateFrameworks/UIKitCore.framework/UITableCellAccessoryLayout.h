/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICellAccessoryLayout.h>

@class UICellAccessoryManager, NSDictionary, NSMutableDictionary, NSString;

@interface UITableCellAccessoryLayout : NSObject <UICellAccessoryLayout> {

	UICellAccessoryManager* _manager;
	unsigned long long _edge;
	double _safeAreaInset;
	double _minimumCompressionLayoutWidth;
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
@property (nonatomic,copy) id spacingBlock;                                        //@synthesize spacingBlock=_spacingBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UICellAccessoryManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) double safeAreaInset;                                 //@synthesize safeAreaInset=_safeAreaInset - In the implementation block
@property (assign,nonatomic) unsigned long long edge;                              //@synthesize edge=_edge - In the implementation block
@property (assign,nonatomic) double minimumCompressionLayoutWidth;                 //@synthesize minimumCompressionLayoutWidth=_minimumCompressionLayoutWidth - In the implementation block
-(id)init;
-(UICellAccessoryManager *)manager;
-(void)setManager:(UICellAccessoryManager *)arg1 ;
-(void)setSpacingBlock:(id)arg1 ;
-(void)setMinimumCompressionLayoutWidth:(double)arg1 ;
-(void)setEdge:(unsigned long long)arg1 ;
-(void)setSafeAreaInset:(double)arg1 ;
-(double)minimumCompressionLayoutWidth;
-(void)prepareLayoutForAccessories:(id)arg1 previousAccessories:(id)arg2 configurationIdentifier:(id)arg3 ;
-(CGRect)initialFrameForAccessory:(id)arg1 ;
-(double)initialAlphaForAccessory:(id)arg1 ;
-(CGRect)finalFrameForAccessory:(id)arg1 ;
-(double)finalAlphaForAccessory:(id)arg1 ;
-(CGRect)endLayout;
-(double)_totalWidthForAccessories:(id)arg1 withContainerSize:(CGSize)arg2 ;
-(CGRect)_frameForAccessoryAtIndex:(unsigned long long)arg1 inAccessories:(id)arg2 containerSize:(CGSize)arg3 withXOrigin:(double*)arg4 ;
-(id)_framesForAccessories:(id)arg1 withContainerSize:(CGSize)arg2 outTotalFrame:(CGRect*)arg3 ;
-(double)safeAreaInset;
-(unsigned long long)edge;
-(id)spacingBlock;
-(CGRect)totalFrame;
-(void)setTotalFrame:(CGRect)arg1 ;
-(NSDictionary *)initialFrames;
-(void)setInitialFrames:(NSDictionary *)arg1 ;
-(NSDictionary *)finalFrames;
-(void)setFinalFrames:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)initialAlphas;
-(void)setInitialAlphas:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)finalAlphas;
-(void)setFinalAlphas:(NSMutableDictionary *)arg1 ;
@end

