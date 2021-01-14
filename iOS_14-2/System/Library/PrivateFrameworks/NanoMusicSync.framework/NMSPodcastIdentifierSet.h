/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface NMSPodcastIdentifierSet : NSObject <NSCopying> {

	NSNumber* _storeID;
	NSString* _feedURL;

}

@property (nonatomic,readonly) NSNumber * storeID;              //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) NSString * feedURL;              //@synthesize feedURL=_feedURL - In the implementation block
-(NSNumber *)storeID;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)feedURL;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStoreID:(id)arg1 feedURL:(id)arg2 ;
-(BOOL)isEqualToPodcastIdentifierSet:(id)arg1 ;
@end

