/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITextRange, NSString;

@interface UITextReplacement : NSObject {

	UITextRange* _range;
	NSString* _originalText;
	NSString* _replacementText;
	NSString* _menuTitle;
	unsigned _usageTrackingMask;
	/*^block*/id _replacementCompletionBlock;

}

@property (nonatomic,readonly) UITextRange * range;                     //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * originalText;                 //@synthesize originalText=_originalText - In the implementation block
@property (nonatomic,readonly) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
@property (nonatomic,readonly) NSString * menuTitle;                    //@synthesize menuTitle=_menuTitle - In the implementation block
@property (nonatomic,copy) id replacementCompletionBlock;               //@synthesize replacementCompletionBlock=_replacementCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned usageTrackingMask;                //@synthesize usageTrackingMask=_usageTrackingMask - In the implementation block
+(id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4 ;
-(id)replacementCompletionBlock;
-(UITextRange *)range;
-(NSString *)menuTitle;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(unsigned)usageTrackingMask;
-(void)didReplaceTextWithTarget:(id)arg1 ;
-(NSString *)replacementText;
-(void)setReplacementCompletionBlock:(id)arg1 ;
-(NSString *)originalText;
@end

