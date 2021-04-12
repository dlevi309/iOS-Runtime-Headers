/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setServiceProvider:(NSNumber *)arg1 ;
-(NSNumber *)serviceProvider;
-(NSString *)tokenPayload;
-(void)setTokenPayload:(NSString *)arg1 ;
@end

