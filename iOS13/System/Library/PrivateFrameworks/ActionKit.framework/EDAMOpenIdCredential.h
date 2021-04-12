/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMOpenIdCredential : FATObject {

	NSString* _tokenPayload;
	NSNumber* _serviceProvider;

}

@property (nonatomic,retain) NSString * tokenPayload;                 //@synthesize tokenPayload=_tokenPayload - In the implementation block
@property (nonatomic,retain) NSNumber * serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)serviceProvider;
-(void)setServiceProvider:(NSNumber *)arg1 ;
-(NSString *)tokenPayload;
-(void)setTokenPayload:(NSString *)arg1 ;
@end

