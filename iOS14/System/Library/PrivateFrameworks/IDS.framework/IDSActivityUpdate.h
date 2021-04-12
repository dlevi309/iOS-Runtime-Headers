/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, IDSDevice, NSArray;

@interface IDSActivityUpdate : NSObject <NSSecureCoding> {

	BOOL _isDeviceOnline;
	NSString* _subActivity;
	NSData* _pushToken;
	unsigned long long _serverTimestamp;
	NSData* _clientContext;
	IDSDevice* _matchingDevice;
	NSArray* _URIs;

}

@property (assign,nonatomic) BOOL isDeviceOnline;                               //@synthesize isDeviceOnline=_isDeviceOnline - In the implementation block
@property (nonatomic,retain) IDSDevice * matchingDevice;                        //@synthesize matchingDevice=_matchingDevice - In the implementation block
@property (nonatomic,retain) NSArray * URIs;                                    //@synthesize URIs=_URIs - In the implementation block
@property (nonatomic,readonly) NSString * subActivity;                          //@synthesize subActivity=_subActivity - In the implementation block
@property (nonatomic,readonly) NSData * pushToken;                              //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) unsigned long long serverTimestamp;              //@synthesize serverTimestamp=_serverTimestamp - In the implementation block
@property (nonatomic,readonly) NSData * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)URIs;
-(NSData *)pushToken;
-(NSData *)clientContext;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setURIs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subActivity;
-(BOOL)isDeviceOnline;
-(void)setIsDeviceOnline:(BOOL)arg1 ;
-(IDSDevice *)matchingDevice;
-(void)setMatchingDevice:(IDSDevice *)arg1 ;
-(id)initWithSubActivity:(id)arg1 pushToken:(id)arg2 serverTimestamp:(unsigned long long)arg3 clientContext:(id)arg4 isDeviceOnline:(BOOL)arg5 ;
-(unsigned long long)serverTimestamp;
@end

