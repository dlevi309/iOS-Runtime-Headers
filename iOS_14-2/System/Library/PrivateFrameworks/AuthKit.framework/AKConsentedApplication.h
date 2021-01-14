/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface AKConsentedApplication : NSObject <NSSecureCoding> {

	NSArray* _scopes;
	NSString* _clientID;
	long long _state;
	NSString* _transferState;
	NSString* _origin;
	NSString* _primaryClientID;

}

@property (nonatomic,copy) NSArray * scopes;                          //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,copy) NSString * clientID;                       //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * transferState;                //@synthesize transferState=_transferState - In the implementation block
@property (nonatomic,retain) NSString * primaryClientID;              //@synthesize primaryClientID=_primaryClientID - In the implementation block
@property (nonatomic,retain) NSString * origin;                       //@synthesize origin=_origin - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)scopes;
-(void)setOrigin:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)origin;
-(void)setScopes:(NSArray *)arg1 ;
-(NSString *)transferState;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setTransferState:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)initWithResponseInfo:(id)arg1 ;
-(NSString *)primaryClientID;
-(void)setPrimaryClientID:(NSString *)arg1 ;
@end

