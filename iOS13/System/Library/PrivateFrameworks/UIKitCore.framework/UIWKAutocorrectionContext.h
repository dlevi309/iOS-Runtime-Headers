/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface UIWKAutocorrectionContext : NSObject {

	NSString* _contextBeforeSelection;
	NSString* _selectedText;
	NSString* _contextAfterSelection;
	NSString* _markedText;
	NSRange _rangeInMarkedText;

}

@property (nonatomic,copy) NSString * contextBeforeSelection;              //@synthesize contextBeforeSelection=_contextBeforeSelection - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                        //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSString * contextAfterSelection;               //@synthesize contextAfterSelection=_contextAfterSelection - In the implementation block
@property (nonatomic,copy) NSString * markedText;                          //@synthesize markedText=_markedText - In the implementation block
@property (assign,nonatomic) NSRange rangeInMarkedText;                    //@synthesize rangeInMarkedText=_rangeInMarkedText - In the implementation block
-(void)dealloc;
-(NSString *)markedText;
-(NSString *)selectedText;
-(void)setMarkedText:(NSString *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(NSString *)contextBeforeSelection;
-(NSString *)contextAfterSelection;
-(NSRange)rangeInMarkedText;
-(void)setContextBeforeSelection:(NSString *)arg1 ;
-(void)setContextAfterSelection:(NSString *)arg1 ;
-(void)setRangeInMarkedText:(NSRange)arg1 ;
@end

