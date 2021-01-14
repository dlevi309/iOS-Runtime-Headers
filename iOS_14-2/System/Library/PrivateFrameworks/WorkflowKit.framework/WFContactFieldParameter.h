/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSArray, NSString;

@interface WFContactFieldParameter : WFParameter <WFModuleSummarySupporting> {

	BOOL _allowsTextEntry;
	BOOL _hidesLabel;
	long long _textAlignment;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	NSArray* _supportedContactProperties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsTextEntry;                              //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType; 
@property (nonatomic,readonly) long long textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;                  //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                      //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) NSArray * supportedContactProperties;              //@synthesize supportedContactProperties=_supportedContactProperties - In the implementation block
@property (nonatomic,readonly) BOOL hidesLabel;                                   //@synthesize hidesLabel=_hidesLabel - In the implementation block
-(id)moduleSummarySlotsForState:(id)arg1 ;
-(long long)autocapitalizationType;
-(long long)keyboardType;
-(long long)autocorrectionType;
-(long long)textAlignment;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(BOOL)displaysMultipleValueEditor;
-(Class)stateClass;
-(Class)multipleStateClass;
-(BOOL)shouldAlignLabels;
-(BOOL)allowsTextEntry;
-(NSArray *)supportedContactProperties;
-(BOOL)hidesLabel;
@end

