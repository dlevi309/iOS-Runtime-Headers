/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setVersionString:(NSString *)arg1 ;
-(NSString *)versionString;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(id)valueForHeaderField:(id)arg1 ;
-(void)setHeaders:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)headers;
-(void)addHeadersToMessage:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)copyMessage;
@end

