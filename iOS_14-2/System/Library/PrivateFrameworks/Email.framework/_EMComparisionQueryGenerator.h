/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EMSearchableIndexQueryGenerator.h>

@class NSString;

@interface _EMComparisionQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_comparisonOperatorForPredicate:(id)arg1 ;
-(id)_attributesForPredicate:(id)arg1 propertyMapper:(id)arg2 ;
-(unsigned long long)_modifiersForPredicate:(id)arg1 ;
-(id)_patternMatchStringForPredicate:(id)arg1 ;
-(id)queryExpressionFromPredicate:(id)arg1 propertyMapper:(id)arg2 languages:(id)arg3 ;
@end

