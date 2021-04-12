/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMBaseStoreService.h>

@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService {

	NSString* _protocolVersion;

}

@property (nonatomic,retain) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(id)init;
-(NSString *)protocolVersion;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(id)urlRequest;
-(void)performRequest:(/*^block*/id)arg1 ;
-(id)baseUrl;
-(id)platformAction;
@end

