/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/TBTile.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface TBFetchedTile : NSObject <TBTile, NSCopying> {

	unsigned long long _key;
	NSString* _etag;
	NSDate* _created;

}

@property (assign,nonatomic) unsigned long long key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSDate * created;                                 //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) unsigned long long networkCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchedTileWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3 ;
-(NSString *)etag;
-(void)setCreated:(NSDate *)arg1 ;
-(NSDate *)created;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)description;
-(unsigned long long)key;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3 ;
-(BOOL)_isEqualToFetchedTile:(id)arg1 ;
@end

