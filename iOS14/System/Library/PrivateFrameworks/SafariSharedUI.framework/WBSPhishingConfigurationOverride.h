/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSRegularExpression;

@interface WBSPhishingConfigurationOverride : NSObject {

	NSRegularExpression* _expression;
	unsigned long long _classification;

}

@property (nonatomic,readonly) NSRegularExpression * expression;               //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) unsigned long long classification;              //@synthesize classification=_classification - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)classification;
-(NSRegularExpression *)expression;
-(id)initWithExpression:(id)arg1 classification:(id)arg2 error:(id*)arg3 ;
@end

