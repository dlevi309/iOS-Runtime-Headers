/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSData, NSArray;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSNumber* _contentIdentifier;
	NSString* _playerGUID;
	NSData* _sic;
	NSArray* _sinfs;
	NSString* _playbackType;

}

@property (nonatomic,copy) NSString * playerGUID;                     //@synthesize playerGUID=_playerGUID - In the implementation block
@property (nonatomic,copy) NSData * SICData;                          //@synthesize sic=_sic - In the implementation block
@property (nonatomic,copy) NSArray * sinfs;                           //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * contentIdentifier;              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * playbackType;                   //@synthesize playbackType=_playbackType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSData *)SICData;
-(NSArray *)sinfs;
-(void)setPlaybackType:(NSString *)arg1 ;
-(NSString *)playerGUID;
-(NSNumber *)accountIdentifier;
-(NSNumber *)contentIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setPlayerGUID:(NSString *)arg1 ;
-(void)setSICData:(NSData *)arg1 ;
-(NSString *)playbackType;
-(void)setSinfs:(NSArray *)arg1 ;
-(void)setContentIdentifier:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

