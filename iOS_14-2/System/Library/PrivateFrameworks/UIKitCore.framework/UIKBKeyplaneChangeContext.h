/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)updateAssistantView;
-(CGSize)size;
-(BOOL)isSecureTextEntry;
-(void)setSize:(CGSize)arg1 ;
-(void)setIsSecureTextEntry:(BOOL)arg1 ;
-(void)setSelfSizingChanged:(BOOL)arg1 ;
-(void)setSplitWidthsChanged:(BOOL)arg1 ;
-(BOOL)selfSizingChanged;
-(void)setUpdateAssistantView:(BOOL)arg1 ;
-(BOOL)sizeDidChange;
-(BOOL)splitWidthsChanged;
@end

