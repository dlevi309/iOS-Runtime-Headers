/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSNumber *)storeID;
-(NSString *)feedURL;
-(id)initWithStoreID:(id)arg1 feedURL:(id)arg2 ;
-(BOOL)isEqualToPodcastIdentifierSet:(id)arg1 ;
@end

