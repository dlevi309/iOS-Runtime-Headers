/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSHTTPURLResponse *)response;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(NSString *)requestBodyKeyPath;
-(NSString *)mockID;
-(void)setRequestBodyKeyPath:(NSString *)arg1 ;
-(void)setMockID:(NSString *)arg1 ;
@end
