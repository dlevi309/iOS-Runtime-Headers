/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFContactFieldParameter : WFParameter {

	BOOL _allowsTextEntry;
	long long _textAlignment;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	NSArray* _supportedContactProperties;

}

@property (nonatomic,readonly) BOOL allowsTextEntry;                              //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType; 
@property (nonatomic,readonly) long long textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;                  //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                      //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) NSArray * supportedContactProperties;              //@synthesize supportedContactProperties=_supportedContactProperties - In the implementation block
-(long long)keyboardType;
-(id)initWithDefinition:(id)arg1 ;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(long long)textAlignment;
-(Class)singleStateClass;
-(Class)stateClass;
-(Class)multipleStateClass;
-(BOOL)shouldAlignLabels;
-(BOOL)allowsTextEntry;
-(NSArray *)supportedContactProperties;
@end

