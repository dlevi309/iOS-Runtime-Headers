/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3 ;
-(NSString *)partialUsername;
@end

