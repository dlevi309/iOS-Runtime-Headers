/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)defaultGroupIdentifier;
-(id)init;
-(id<XBSnapshotManifestStore>)store;
-(id)initWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

