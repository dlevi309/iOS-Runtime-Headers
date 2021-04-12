/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginServices.framework/FusionPluginServices
*/

#import <FusionPluginServices/FusionPluginServices-Structs.h>
#import <FusionPluginKit/HSMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary, NSError;

@interface HSMessageResponse : HSMessage <NSSecureCoding, NSCopying> {

	NSString* _messageStr;
	NSNumber* _statusCode;
	NSDictionary* _responseDict;
	NSError* _error;
	NSString* _errorDescription;

}

@property (nonatomic,readonly) NSString * messageStr;                    //@synthesize messageStr=_messageStr - In the implementation block
@property (nonatomic,readonly) NSNumber * statusCode;                    //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseDict;              //@synthesize responseDict=_responseDict - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSNumber *)statusCode;
-(NSString *)errorDescription;
-(NSString *)messageStr;
-(NSDictionary *)responseDict;
-(id)initWithName:(id)arg1 statusCode:(id)arg2 ;
-(id)initWithName:(id)arg1 statusCode:(id)arg2 andResponse:(id)arg3 ;
-(id)initWithName:(id)arg1 statusCode:(id)arg2 andResponse:(id)arg3 andError:(id)arg4 ;
@end

