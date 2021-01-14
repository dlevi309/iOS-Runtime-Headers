/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
*/


#import <iAdDeveloper/iAdDeveloper-Structs.h>
@class NSMutableDictionary, NSData, NSString;

@interface HTSHTTPMessage : NSObject {

	NSMutableDictionary* _headers;
	NSData* _body;
	NSString* _versionString;

}

@property (nonatomic,copy) NSString * versionString;                     //@synthesize versionString=_versionString - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSData * body;                              //@synthesize body=_body - In the implementation block
-(void)setBody:(NSData *)arg1 ;
-(NSString *)versionString;
-(NSData *)body;
-(NSMutableDictionary *)headers;
-(void)setHeaders:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)setVersionString:(NSString *)arg1 ;
-(id)valueForHeaderField:(id)arg1 ;
-(void)addHeadersToMessage:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)copyMessage;
@end

