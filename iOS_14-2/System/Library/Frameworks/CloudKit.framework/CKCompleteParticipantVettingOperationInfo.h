/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding> {

	NSString* _vettingToken;
	NSString* _vettingEmail;
	NSString* _vettingPhone;
	NSString* _routingKey;
	NSData* _encryptedKey;
	NSString* _baseToken;
	NSString* _displayedHostname;

}

@property (nonatomic,copy) NSString * vettingToken;                     //@synthesize vettingToken=_vettingToken - In the implementation block
@property (nonatomic,retain) NSString * vettingEmail;                   //@synthesize vettingEmail=_vettingEmail - In the implementation block
@property (nonatomic,retain) NSString * vettingPhone;                   //@synthesize vettingPhone=_vettingPhone - In the implementation block
@property (nonatomic,retain) NSString * routingKey;                     //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * encryptedKey;                     //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,retain) NSString * baseToken;                      //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,retain) NSString * displayedHostname;              //@synthesize displayedHostname=_displayedHostname - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)vettingToken;
-(NSString *)vettingEmail;
-(void)setVettingToken:(NSString *)arg1 ;
-(void)setVettingEmail:(NSString *)arg1 ;
-(NSString *)vettingPhone;
-(void)setVettingPhone:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(NSString *)displayedHostname;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(void)setDisplayedHostname:(NSString *)arg1 ;
@end

