/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSNumber, NSError;

@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding> {

	unsigned _result;
	NSData* _merchantId;
	NSString* _signupUrl;
	NSNumber* _terminalAppVersion;
	NSNumber* _terminalMode;
	NSNumber* _didSucceed;
	NSData* _passData;
	NSData* _token;
	NSError* _error;
	NSNumber* _filter;
	NSNumber* _filterType;

}

@property (nonatomic,readonly) NSData * merchantId;                        //@synthesize merchantId=_merchantId - In the implementation block
@property (nonatomic,readonly) NSString * signupUrl;                       //@synthesize signupUrl=_signupUrl - In the implementation block
@property (nonatomic,readonly) NSNumber * terminalAppVersion;              //@synthesize terminalAppVersion=_terminalAppVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * terminalMode;                    //@synthesize terminalMode=_terminalMode - In the implementation block
@property (nonatomic,readonly) NSNumber * didSucceed;                      //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,readonly) NSData * passData;                          //@synthesize passData=_passData - In the implementation block
@property (nonatomic,readonly) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * filter;                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSNumber * filterType;                      //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) unsigned result;                            //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(NSData *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSError *)error;
-(unsigned)result;
-(NSNumber *)filter;
-(NSNumber *)filterType;
-(NSData *)merchantId;
-(NSNumber *)didSucceed;
-(id)asDictionary;
-(NSNumber *)terminalMode;
-(NSString *)signupUrl;
-(NSNumber *)terminalAppVersion;
-(NSData *)passData;
@end

