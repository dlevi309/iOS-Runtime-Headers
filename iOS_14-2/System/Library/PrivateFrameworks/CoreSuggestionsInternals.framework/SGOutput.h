/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSArray, NSDictionary;

@interface SGOutput : NSObject {

	NSArray* _outputItems;
	NSDictionary* _sourceMetadata;
	NSArray* _exceptionTemplates;
	NSDictionary* _jsMessageLogs;

}

@property (nonatomic,readonly) NSArray * outputItems;                      //@synthesize outputItems=_outputItems - In the implementation block
@property (nonatomic,readonly) NSDictionary * sourceMetadata;              //@synthesize sourceMetadata=_sourceMetadata - In the implementation block
@property (nonatomic,readonly) NSArray * exceptionTemplates;               //@synthesize exceptionTemplates=_exceptionTemplates - In the implementation block
@property (nonatomic,readonly) NSDictionary * jsMessageLogs;               //@synthesize jsMessageLogs=_jsMessageLogs - In the implementation block
-(NSDictionary *)sourceMetadata;
-(id)initWithOutputItems:(id)arg1 sourceMetadata:(id)arg2 exeptionTemplates:(id)arg3 jsMessageLogs:(id)arg4 ;
-(id)initWithOutputItems:(id)arg1 exeptionTemplates:(id)arg2 jsMessageLogs:(id)arg3 ;
-(NSArray *)outputItems;
-(NSArray *)exceptionTemplates;
-(NSDictionary *)jsMessageLogs;
@end

