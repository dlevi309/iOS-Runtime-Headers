/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
@end

