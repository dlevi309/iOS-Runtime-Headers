/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, UITextPosition;

@interface _UITextInputStringTokenizerSubrange : NSObject {

	NSString* _substring;
	UITextPosition* _basePosition;
	long long _indexOfBase;
	NSRange _relevantRange;

}

@property (nonatomic,readonly) NSString * substring;                       //@synthesize substring=_substring - In the implementation block
@property (nonatomic,readonly) UITextPosition * basePosition;              //@synthesize basePosition=_basePosition - In the implementation block
@property (assign,nonatomic) long long indexOfBase;                        //@synthesize indexOfBase=_indexOfBase - In the implementation block
@property (assign,nonatomic) NSRange relevantRange;                        //@synthesize relevantRange=_relevantRange - In the implementation block
+(id)subrangeWithSubstring:(id)arg1 basePosition:(id)arg2 ;
-(void)dealloc;
-(NSString *)substring;
-(UITextPosition *)basePosition;
-(long long)indexOfBase;
-(void)setIndexOfBase:(long long)arg1 ;
-(NSRange)relevantRange;
-(void)setRelevantRange:(NSRange)arg1 ;
@end

