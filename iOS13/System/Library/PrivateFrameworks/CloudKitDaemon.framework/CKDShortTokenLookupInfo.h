/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDShortTokenLookupInfo : NSObject <NSCopying> {

	BOOL _shouldFetchRootRecord;
	BOOL _forceDSRefetch;
	NSString* _routingKey;
	NSData* _shortSharingTokenHashData;

}

@property (nonatomic,retain) NSString * routingKey;                           //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenHashData;              //@synthesize shortSharingTokenHashData=_shortSharingTokenHashData - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                      //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (assign,nonatomic) BOOL forceDSRefetch;                             //@synthesize forceDSRefetch=_forceDSRefetch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSData *)shortSharingTokenHashData;
-(void)setShortSharingTokenHashData:(NSData *)arg1 ;
-(BOOL)forceDSRefetch;
-(void)setForceDSRefetch:(BOOL)arg1 ;
@end

