/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFMessageCriterionConverterDelegate.h>

@class NSString;

@interface _MFDASearchCriterionConverterDelegate : NSObject <MFMessageCriterionConverterDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)messageCriterionConverter:(id)arg1 predicateKeysForCriterionType:(long long)arg2 ;
-(unsigned long long)messageCriterionConverter:(id)arg1 willUsePredicateOperatorType:(unsigned long long)arg2 forKey:(id)arg3 ;
-(BOOL)_shouldConvertEqualsToContainsForKey:(id)arg1 ;
@end

