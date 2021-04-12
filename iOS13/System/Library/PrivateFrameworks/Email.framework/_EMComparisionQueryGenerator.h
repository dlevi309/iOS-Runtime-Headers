/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EMSearchableIndexQueryGenerator.h>

@class NSString;

@interface _EMComparisionQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_attributesForPredicate:(id)arg1 propertyMapper:(id)arg2 ;
-(id)_comparisonOperatorForPredicate:(id)arg1 ;
-(unsigned long long)_modifiersForPredicate:(id)arg1 ;
-(id)_patternMatchStringForPredicate:(id)arg1 ;
-(id)queryExpressionFromPredicate:(id)arg1 propertyMapper:(id)arg2 languages:(id)arg3 ;
@end

