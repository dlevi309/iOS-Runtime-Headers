/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)autocapitalizationType;
-(long long)keyboardType;
-(long long)autocorrectionType;
-(long long)textAlignment;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(BOOL)shouldAlignLabels;
-(NSArray *)suggestedTags;
-(BOOL)allowsTextEntry;
@end

