/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSHTTPURLResponse, NSData, NSString;

@interface IMMockURLResponse : NSObject <NSSecureCoding> {

	NSHTTPURLResponse* _response;
	NSData* _data;
	NSString* _requestBodyKeyPath;
	NSString* _mockID;

}

@property (retain) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (copy) NSString * requestBodyKeyPath;               //@synthesize requestBodyKeyPath=_requestBodyKeyPath - In the implementation block
@property (copy) NSString * mockID;                           //@synthesize mockID=_mockID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)objectFromPlist:(id)arg1 ;
-(NSString *)mockID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSHTTPURLResponse *)response;
-(NSData *)data;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setMockID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)requestBodyKeyPath;
-(void)setRequestBodyKeyPath:(NSString *)arg1 ;
@end

