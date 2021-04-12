/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFTagFieldParameter : WFParameter {

	BOOL _allowsTextEntry;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _textAlignment;
	NSArray* _suggestedTags;

}

@property (nonatomic,readonly) BOOL allowsTextEntry;                          //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                       //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) NSArray * suggestedTags;                       //@synthesize suggestedTags=_suggestedTags - In the implementation block
-(long long)keyboardType;
-(id)initWithDefinition:(id)arg1 ;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(long long)textAlignment;
-(Class)singleStateClass;
-(BOOL)shouldAlignLabels;
-(NSArray *)suggestedTags;
-(BOOL)allowsTextEntry;
@end

