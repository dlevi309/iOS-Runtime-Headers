/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService {

	NSString* _protocolVersion;

}

@property (nonatomic,retain) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(id)init;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(id)urlRequest;
-(NSString *)protocolVersion;
-(void)performRequest:(/*^block*/id)arg1 ;
-(id)baseUrl;
-(id)platformAction;
@end

