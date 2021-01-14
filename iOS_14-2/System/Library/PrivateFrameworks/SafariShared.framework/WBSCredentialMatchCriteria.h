/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSURL, NSString;

@interface WBSCredentialMatchCriteria : NSObject {

	unsigned long long _options;
	NSURL* _URL;
	NSString* _partialUsername;

}

@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * partialUsername;              //@synthesize partialUsername=_partialUsername - In the implementation block
-(unsigned long long)options;
-(NSURL *)URL;
-(NSString *)partialUsername;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3 ;
@end

