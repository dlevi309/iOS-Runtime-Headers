/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSURL, NSUUID;

@interface FBSBundleInfo : NSObject <BSDescriptionProviding> {

	NSString* _displayName;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleType;
	NSURL* _bundleURL;
	unsigned long long _sequenceNumber;
	NSUUID* _cacheGUID;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                              //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleVersion;                  //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleType;                     //@synthesize bundleType=_bundleType - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * cacheGUID;                        //@synthesize cacheGUID=_cacheGUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSString *)displayName;
-(NSUUID *)cacheGUID;
-(unsigned long long)sequenceNumber;
-(NSString *)bundleVersion;
-(NSString *)bundleType;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2 ;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(id)_initWithBundleProxy:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3 ;
@end

