/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGMessageKey.h>

@class NSString;

@interface SGInteractionKey : SGMessageKey

@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) NSString * personHandle; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(NSString *)personHandle;
-(id)init;
-(NSString *)bundleId;
-(id)description;
-(id)initWithSource:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)initWithBundleId:(id)arg1 personHandle:(id)arg2 ;
@end

