/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class RMProfilesAdapter, NSURLSession, NSString;

@interface RMProfilesController : NSObject {

	RMProfilesAdapter* _profilesAdapter;
	NSURLSession* _URLSession;
	NSString* _profileIdentifierPrefix;

}

@property (nonatomic,retain) RMProfilesAdapter * profilesAdapter;              //@synthesize profilesAdapter=_profilesAdapter - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                        //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,copy) NSString * profileIdentifierPrefix;                 //@synthesize profileIdentifierPrefix=_profileIdentifierPrefix - In the implementation block
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(id)installedProfileIdentifiers;
-(void)uninstallProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithURLSession:(id)arg1 profilesAdapter:(id)arg2 profileIdentifierPrefix:(id)arg3 ;
-(RMProfilesAdapter *)profilesAdapter;
-(NSString *)profileIdentifierPrefix;
-(id)profileIdentifierForConfiguration:(id)arg1 ;
-(void)_installProfileAtPath:(id)arg1 identifier:(id)arg2 deviceChannel:(BOOL)arg3 configuration:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_installProfileData:(id)arg1 configuration:(id)arg2 deviceChannel:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithProfileIdentifierPrefix:(id)arg1 ;
-(void)downloadAndInstallProfileConfiguration:(id)arg1 fromURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)profileNameForConfiguration:(id)arg1 ;
-(void)setProfilesAdapter:(RMProfilesAdapter *)arg1 ;
-(void)setProfileIdentifierPrefix:(NSString *)arg1 ;
@end

