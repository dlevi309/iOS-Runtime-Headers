/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CNAtomViewResembling.h>

@protocol MFModernAddressAtomDelegate, ECEmailAddressConvertible;
@class UIFont, CNAtomView, NSString;

@interface MFModernAddressAtom : UIControl <CNAtomViewResembling> {

	id<MFModernAddressAtomDelegate> _delegate;
	CNAtomView* _atomView;
	void* _person;
	id<ECEmailAddressConvertible> _fullAddress;
	NSString* _displayString;
	unsigned _maxWidth;
	int _identifier;
	unsigned _addressIsPhoneNumber : 1;
	unsigned _updatedABPerson : 1;
	unsigned _isDisplayStringFromAddressBook : 1;
	void* _addressBook;
	NSString* _addressIdentifier;
	double _firstLineIndent;

}

@property (nonatomic,readonly) NSString * addressIdentifier; 
@property (assign,nonatomic) double firstLineIndent;                              //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (nonatomic,readonly) long long numberOfLines; 
@property (assign,nonatomic) BOOL isPrimaryAddressAtom; 
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) BOOL separatorIsLeftAligned; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void*)arg2 useAbbreviatedName:(BOOL)arg3 ;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isDisplayStringFromAddressBook;
-(int)ABPropertyType;
-(id)displayString;
-(id)viewForLastBaselineLayout;
-(id)emailAddress;
-(void)setEnabled:(BOOL)arg1 ;
-(void*)ABPerson;
-(unsigned long long)presentationOptions;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setAddress:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGPoint)baselinePoint;
-(void)setScale:(double)arg1 ;
-(void)setAtomFont:(id)arg1 ;
-(id)contactWithKeysToFetch:(id)arg1 ;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2 ;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1 ;
-(void)setFirstLineIndent:(double)arg1 ;
-(double)firstLineIndent;
-(int)identifier;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSString *)addressIdentifier;
-(void)setMaxWidth:(unsigned)arg1 ;
-(long long)numberOfLines;
-(void)_updateDisplayStringIncludingABPerson:(BOOL)arg1 ;
-(void)_displayStringDidChange;
-(void)_updateABPerson;
-(void)dealloc;
-(id)presentationOptionsDescription;
-(id)unmodifiedAddressString;
-(id)initWithAddress:(id)arg1 presentationOptions:(unsigned long long)arg2 isPhoneNumber:(BOOL)arg3 maxWidth:(double)arg4 addressBook:(void*)arg5 ;
-(void)addressBookDidChange:(id)arg1 ;
-(CGRect)_highlightBounds;
-(void)setHighlighted:(BOOL)arg1 ;
@end

