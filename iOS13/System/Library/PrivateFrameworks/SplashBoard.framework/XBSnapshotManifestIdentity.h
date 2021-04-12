/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol XBSnapshotManifestStore;
@class NSString;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	id<XBSnapshotManifestStore> _store;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultGroupIdentifier; 
@property (nonatomic,copy,readonly) id<XBSnapshotManifestStore> store;              //@synthesize store=_store - In the implementation block
+(id)identityWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id<XBSnapshotManifestStore>)store;
-(NSString *)defaultGroupIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
@end

