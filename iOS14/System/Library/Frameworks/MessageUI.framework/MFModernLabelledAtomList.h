/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MFPassthroughViewProvider.h>
#import <libobjc.A.dylib/MFModernAddressAtomDelegate.h>

@protocol MFModernLabelledAtomListDelegate;
@class NSMutableArray, NSString, UILabel, UIColor, NSArray;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate> {

	void* _addressBook;
	NSMutableArray* _addressAtoms;
	NSString* _title;
	BOOL _labelVisible;
	unsigned _needsReflow : 1;
	double _previousWidth;
	UILabel* _label;
	UILabel* _lastBaselineDeceptionLabel;
	BOOL _primary;
	UIColor* _labelTextColor;
	double _lineSpacing;
	unsigned long long _numberOfRows;
	NSArray* _viewsToDodge;
	id<MFModernLabelledAtomListDelegate> _delegate;
	NSArray* _addresses;

}

@property (nonatomic,copy) NSArray * addresses;                                                 //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIColor * labelTextColor;                                          //@synthesize labelTextColor=_labelTextColor - In the implementation block
@property (assign,getter=isLabelVisible,nonatomic) BOOL labelVisible; 
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                     //@synthesize primary=_primary - In the implementation block
@property (assign,nonatomic) double lineSpacing;                                                //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRows;                                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,retain) NSArray * viewsToDodge;                                            //@synthesize viewsToDodge=_viewsToDodge - In the implementation block
@property (assign,nonatomic,__weak) id<MFModernLabelledAtomListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLabelFont;
+(id)primaryLabelFont;
+(double)atomLineHeight;
+(double)spaceBetweenColonAndFirstAtomNaturalEdge;
-(BOOL)isPrimary;
-(id)passthroughViews;
-(void)setOpaque:(BOOL)arg1 ;
-(NSArray *)addresses;
-(void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2 ;
-(id)addressAtoms;
-(BOOL)isLabelVisible;
-(void)_reflowIfNeeded;
-(CGRect)_frameForAtomAtIndex:(unsigned long long)arg1 withStartingPoint:(CGPoint)arg2 row:(inout unsigned long long*)arg3 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(id)viewForFirstBaselineLayout;
-(id<MFModernLabelledAtomListDelegate>)delegate;
-(void)_reflow;
-(UIColor *)labelTextColor;
-(CGPoint)baselinePointForRow:(unsigned long long)arg1 ;
-(double)_remainingSpaceForRowAtPoint:(CGPoint)arg1 ;
-(NSArray *)viewsToDodge;
-(void)setAddressAtomSeparatorStyle:(int)arg1 ;
-(void)enumerateAddressAtomsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 title:(id)arg2 addressBook:(const void*)arg3 ;
-(void)setAddresses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(void)setAtomAlpha:(double)arg1 ;
-(unsigned long long)numberOfRows;
-(void)setAddressAtomScale:(double)arg1 ;
-(void)setAddressAtomsArePrimary:(BOOL)arg1 ;
-(void)setLabelVisible:(BOOL)arg1 ;
-(void)updateAtomsForVIP;
-(id)atomDisplayStrings;
-(void)crossFadeLabelVisibility:(BOOL)arg1 atomSeparatorStyle:(int)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setOverrideFont:(id)arg1 ;
-(void)setViewsToDodge:(NSArray *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)lineSpacing;
-(void)setDelegate:(id<MFModernLabelledAtomListDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGRect)labelFrame;
-(void)setLineSpacing:(double)arg1 ;
-(id)labelText;
-(void)_setNeedsReflow;
-(void)setPrimary:(BOOL)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(UILabel *)label;
-(id)title;
-(void)dealloc;
-(void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2 ;
-(void)addressBookDidChange:(id)arg1 ;
@end

