/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface AKConsentedApplication : NSObject <NSSecureCoding> {

	NSArray* _scopes;
	NSString* _clientID;
	long long _state;
	NSString* _transferState;
	NSString* _primaryClientID;

}

@property (nonatomic,copy) NSArray * scopes;                          //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,copy) NSString * clientID;                       //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * transferState;                //@synthesize transferState=_transferState - In the implementation block
@property (nonatomic,retain) NSString * primaryClientID;              //@synthesize primaryClientID=_primaryClientID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(NSString *)transferState;
-(void)setTransferState:(NSString *)arg1 ;
-(id)initWithResponseInfo:(id)arg1 ;
-(NSArray *)scopes;
-(void)setScopes:(NSArray *)arg1 ;
-(NSString *)primaryClientID;
-(void)setPrimaryClientID:(NSString *)arg1 ;
@end

