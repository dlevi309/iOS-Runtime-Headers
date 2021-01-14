/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RERecentAction : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	unsigned long long _actionIdentifier;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
+(id)actionWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setActionIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)actionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

