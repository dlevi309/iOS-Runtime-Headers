/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKSetAirPlayRouteRequest : CATTaskRequest {

	BOOL _suppressPasscodePrompt;
	NSString* _routeUID;
	NSString* _password;

}

@property (nonatomic,copy) NSString * routeUID;                        //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL suppressPasscodePrompt;              //@synthesize suppressPasscodePrompt=_suppressPasscodePrompt - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(BOOL)suppressPasscodePrompt;
-(void)setSuppressPasscodePrompt:(BOOL)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

