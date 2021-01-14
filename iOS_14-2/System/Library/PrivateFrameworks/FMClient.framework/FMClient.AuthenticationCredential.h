/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.AuthenticationCredential : NSObject <NSSecureCoding> {

	 authToken;
	 personId;
	 hostName;

}

@property (readonly,nonatomic) NSString * authToken; 
@property (readonly,nonatomic) NSString * personId; 
@property (readonly,nonatomic) NSString * hostName; 
+(BOOL)supportsSecureCoding;
-(NSString *)authToken;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)hostName;
-(NSString *)personId;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAuthToken:(id)arg1 personId:(id)arg2 hostName:(id)arg3 ;
@end

