/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSURLProtectionSpace, NSDictionary, NSURLCredential;

@interface WBSProtectionSpaceMatch : NSObject {

	NSURLProtectionSpace* _protectionSpace;
	NSDictionary* _credentials;
	NSURLCredential* _defaultCredential;
	long long _matchLevel;

}

@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * credentials;                     //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,readonly) NSURLCredential * defaultCredential;                 //@synthesize defaultCredential=_defaultCredential - In the implementation block
@property (nonatomic,readonly) long long matchLevel;                                //@synthesize matchLevel=_matchLevel - In the implementation block
-(id)initWithProtectionSpace:(id)arg1 credentials:(id)arg2 defaultCredential:(id)arg3 matchLevel:(long long)arg4 ;
-(long long)matchLevel;
-(NSDictionary *)credentials;
-(NSURLProtectionSpace *)protectionSpace;
-(NSURLCredential *)defaultCredential;
@end

