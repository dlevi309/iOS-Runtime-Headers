/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TILoginCredential : NSObject <NSCopying> {

	NSString* _username;
	NSString* _password;
	NSString* _site;

}

@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * site;                  //@synthesize site=_site - In the implementation block
-(NSString *)site;
-(NSString *)password;
-(NSString *)username;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3 ;
@end

