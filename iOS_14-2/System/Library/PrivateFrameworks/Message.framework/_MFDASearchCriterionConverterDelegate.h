/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFMessageCriterionConverterDelegate.h>

@class NSString;

@interface _MFDASearchCriterionConverterDelegate : NSObject <MFMessageCriterionConverterDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldConvertEqualsToContainsForKey:(id)arg1 ;
-(id)messageCriterionConverter:(id)arg1 predicateKeysForCriterionType:(long long)arg2 ;
-(unsigned long long)messageCriterionConverter:(id)arg1 willUsePredicateOperatorType:(unsigned long long)arg2 forKey:(id)arg3 ;
@end

