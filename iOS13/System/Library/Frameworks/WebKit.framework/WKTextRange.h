/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextRange.h>

@class NSArray;

@interface WKTextRange : UITextRange {

	CGRect _startRect;
	CGRect _endRect;
	BOOL _isNone;
	BOOL _isRange;
	BOOL _isEditable;
	NSArray* _selectionRects;
	unsigned long long _selectedTextLength;

}

@property (assign,nonatomic) CGRect startRect;                                   //@synthesize startRect=_startRect - In the implementation block
@property (assign,nonatomic) CGRect endRect;                                     //@synthesize endRect=_endRect - In the implementation block
@property (assign,nonatomic) BOOL isNone;                                        //@synthesize isNone=_isNone - In the implementation block
@property (assign,nonatomic) BOOL isRange;                                       //@synthesize isRange=_isRange - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                                    //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTextLength;              //@synthesize selectedTextLength=_selectedTextLength - In the implementation block
@property (nonatomic,copy) NSArray * selectionRects;                             //@synthesize selectionRects=_selectionRects - In the implementation block
+(id)textRangeWithState:(BOOL)arg1 isRange:(BOOL)arg2 isEditable:(BOOL)arg3 startRect:(CGRect)arg4 endRect:(CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(id)start;
-(id)end;
-(BOOL)isEditable;
-(CGRect)startRect;
-(CGRect)endRect;
-(BOOL)_isRanged;
-(BOOL)_isCaret;
-(NSArray *)selectionRects;
-(void)setStartRect:(CGRect)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(void)setIsEditable:(BOOL)arg1 ;
-(void)setIsNone:(BOOL)arg1 ;
-(void)setIsRange:(BOOL)arg1 ;
-(void)setSelectedTextLength:(unsigned long long)arg1 ;
-(void)setSelectionRects:(NSArray *)arg1 ;
-(BOOL)isRange;
-(BOOL)isNone;
-(unsigned long long)selectedTextLength;
@end

