/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGMessageKey.h>
#import <libobjc.A.dylib/SGEntityKey.h>

@class NSString;

@interface SGEmailKey : SGMessageKey <SGEntityKey>

@property (readonly) NSString * messageId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(id)initWithSource:(id)arg1 messageId:(id)arg2 ;
-(NSString *)description;
-(id)initWithMailMessageKey:(id)arg1 ;
-(BOOL)isEqualToEmailKey:(id)arg1 ;
-(NSString *)messageId;
-(id)toMailMessageKey;
-(BOOL)isEqual:(id)arg1 ;
@end

