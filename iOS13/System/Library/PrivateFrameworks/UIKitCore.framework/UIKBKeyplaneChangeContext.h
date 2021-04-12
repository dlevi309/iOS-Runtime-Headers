/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBKeyplaneChangeContext : NSObject {

	BOOL _sizeDidChange;
	BOOL _splitWidthsChanged;
	BOOL _selfSizingChanged;
	BOOL _updateAssistantView;
	BOOL _isSecureTextEntry;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL sizeDidChange;                  //@synthesize sizeDidChange=_sizeDidChange - In the implementation block
@property (assign,nonatomic) BOOL splitWidthsChanged;               //@synthesize splitWidthsChanged=_splitWidthsChanged - In the implementation block
@property (assign,nonatomic) BOOL selfSizingChanged;                //@synthesize selfSizingChanged=_selfSizingChanged - In the implementation block
@property (assign,nonatomic) BOOL updateAssistantView;              //@synthesize updateAssistantView=_updateAssistantView - In the implementation block
@property (assign,nonatomic) BOOL isSecureTextEntry;                //@synthesize isSecureTextEntry=_isSecureTextEntry - In the implementation block
+(id)keyplaneChangeContext;
+(id)keyplaneChangeContextWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)isSecureTextEntry;
-(BOOL)sizeDidChange;
-(BOOL)splitWidthsChanged;
-(void)setSplitWidthsChanged:(BOOL)arg1 ;
-(BOOL)selfSizingChanged;
-(void)setSelfSizingChanged:(BOOL)arg1 ;
-(BOOL)updateAssistantView;
-(void)setUpdateAssistantView:(BOOL)arg1 ;
-(void)setIsSecureTextEntry:(BOOL)arg1 ;
@end

