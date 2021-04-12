/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)actionIdentifier;
-(void)setActionIdentifier:(unsigned long long)arg1 ;
@end

