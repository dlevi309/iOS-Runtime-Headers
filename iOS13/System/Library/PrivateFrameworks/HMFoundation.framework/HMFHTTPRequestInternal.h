/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSURL, NSString, NSData, HMFActivity, NSDictionary;

@interface HMFHTTPRequestInternal : HMFObject {

	NSMutableDictionary* _headerFields;
	NSURL* _URL;
	NSString* _method;
	NSData* _body;
	HMFActivity* _activity;

}

@property (nonatomic,copy) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * method;                          //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,retain) NSData * body;                            //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                 //@synthesize activity=_activity - In the implementation block
-(id)init;
-(NSString *)method;
-(HMFActivity *)activity;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setMethod:(NSString *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
@end

