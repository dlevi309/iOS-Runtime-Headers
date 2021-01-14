/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/TRITaskAttributing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TRIDownloadOptions;

@interface TRITaskAttributionInternalInsecure : NSObject <TRITaskAttributing, NSCopying> {

	int _triCloudKitContainer;
	NSString* _teamIdentifier;
	NSString* _applicationBundleIdentifier;
	TRIDownloadOptions* _networkOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * teamIdentifier;                           //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,readonly) int triCloudKitContainer;                            //@synthesize triCloudKitContainer=_triCloudKitContainer - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) TRIDownloadOptions * networkOptions;                 //@synthesize networkOptions=_networkOptions - In the implementation block
+(id)taskAttributionWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4 ;
+(id)taskAttributionFromPersistedTask:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(unsigned long long)hash;
-(NSString *)teamIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4 ;
-(int)triCloudKitContainer;
-(TRIDownloadOptions *)networkOptions;
-(BOOL)isEqualToTaskAttribution:(id)arg1 ;
-(id)copyWithReplacementTeamIdentifier:(id)arg1 ;
-(id)copyWithReplacementTriCloudKitContainer:(int)arg1 ;
-(id)copyWithReplacementApplicationBundleIdentifier:(id)arg1 ;
-(id)copyWithReplacementNetworkOptions:(id)arg1 ;
-(id)asPersistedTaskAttribution;
@end

