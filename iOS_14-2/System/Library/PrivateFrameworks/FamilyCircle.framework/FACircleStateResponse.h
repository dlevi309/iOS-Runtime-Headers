/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSDictionary;

@interface FACircleStateResponse : NSObject <NSSecureCoding> {

	BOOL _loadSuccess;
	NSError* _error;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) BOOL loadSuccess;                     //@synthesize loadSuccess=_loadSuccess - In the implementation block
@property (nonatomic,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)success;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)loadSuccess;
-(id)initWithLoadSuccess:(BOOL)arg1 error:(id)arg2 userInfo:(id)arg3 ;
@end

