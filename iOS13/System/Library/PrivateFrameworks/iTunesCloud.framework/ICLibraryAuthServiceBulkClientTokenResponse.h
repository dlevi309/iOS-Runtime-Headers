/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface ICLibraryAuthServiceBulkClientTokenResponse : NSObject <NSCopying> {

	NSDictionary* _responseDictionary;
	NSMutableDictionary* _parsedTokenResults;

}

@property (nonatomic,copy,readonly) NSString * serverInstance; 
@property (nonatomic,copy,readonly) NSDictionary * tokenResults; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serverInstance;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSDictionary *)tokenResults;
-(id)tokenResultForAccountDSID:(id)arg1 ;
@end

