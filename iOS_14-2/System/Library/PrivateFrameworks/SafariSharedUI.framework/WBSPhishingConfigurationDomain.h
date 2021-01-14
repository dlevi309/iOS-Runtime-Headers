/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSArray;

@interface WBSPhishingConfigurationDomain : NSObject {

	NSArray* _expressions;

}

@property (nonatomic,copy,readonly) NSArray * expressions;              //@synthesize expressions=_expressions - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)matchesURL:(id)arg1 ;
-(NSArray *)expressions;
-(id)initWithExpressions:(id)arg1 error:(id*)arg2 ;
@end

