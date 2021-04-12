/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain,readonly) NSData * merchantId;                        //@synthesize merchantId=_merchantId - In the implementation block
@property (nonatomic,retain,readonly) NSString * signupUrl;                       //@synthesize signupUrl=_signupUrl - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * terminalAppVersion;              //@synthesize terminalAppVersion=_terminalAppVersion - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * terminalMode;                    //@synthesize terminalMode=_terminalMode - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * didSucceed;                      //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,retain,readonly) NSData * passData;                          //@synthesize passData=_passData - In the implementation block
@property (nonatomic,retain,readonly) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * filter;                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * filterType;                      //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) unsigned result;                                   //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)filterType;
-(id)asDictionary;
-(NSNumber *)filter;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)signupUrl;
-(NSError *)error;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned)result;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)merchantId;
-(NSNumber *)didSucceed;
-(NSData *)token;
-(NSNumber *)terminalMode;
-(NSNumber *)terminalAppVersion;
-(NSData *)passData;
@end

