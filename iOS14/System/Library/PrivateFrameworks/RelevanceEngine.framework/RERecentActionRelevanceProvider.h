/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString, RERecentAction;

@interface RERecentActionRelevanceProvider : RERelevanceProvider {

	NSString* _bundleIdentifier;
	unsigned long long _actionIdentifier;

}

@property (nonatomic,readonly) RERecentAction * recentAction; 
@property (nonatomic,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
-(id)init;
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)actionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(RERecentAction *)recentAction;
-(id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2 ;
@end

