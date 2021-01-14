/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)tokenResults;
-(id)tokenResultForAccountDSID:(id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)serverInstance;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

