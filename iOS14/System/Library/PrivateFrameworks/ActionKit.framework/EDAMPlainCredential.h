/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPlainCredential : FATObject {

	NSNumber* _userId;
	NSString* _password;

}

@property (nonatomic,retain) NSNumber * userId;                //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)userId;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

