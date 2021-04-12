/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSData, NSMutableDictionary;

@interface ICDelegationPlayInfoRequest : NSObject <NSCopying> {

	NSString* _playerDeviceGUID;
	NSArray* _tokenRequests;
	NSData* _playerAnisetteMID;
	NSString* _playerUserAgent;

}

@property (nonatomic,copy) NSData * playerAnisetteMID;                                             //@synthesize playerAnisetteMID=_playerAnisetteMID - In the implementation block
@property (nonatomic,copy) NSString * playerDeviceGUID;                                            //@synthesize playerDeviceGUID=_playerDeviceGUID - In the implementation block
@property (nonatomic,copy) NSString * playerUserAgent;                                             //@synthesize playerUserAgent=_playerUserAgent - In the implementation block
@property (nonatomic,copy) NSArray * tokenRequests;                                                //@synthesize tokenRequests=_tokenRequests - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
-(NSMutableDictionary *)propertyListRepresentation;
-(void)setPlayerDeviceGUID:(NSString *)arg1 ;
-(void)setPlayerUserAgent:(NSString *)arg1 ;
-(void)setPlayerAnisetteMID:(NSData *)arg1 ;
-(NSData *)playerAnisetteMID;
-(NSString *)playerDeviceGUID;
-(NSString *)playerUserAgent;
-(NSArray *)tokenRequests;
-(void)setTokenRequests:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

