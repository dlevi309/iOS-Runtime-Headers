/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMFActivity, NSDictionary, NSData;

@interface HMFHTTPResponseInternal : HMFObject <NSCopying> {

	HMFActivity* _activity;
	long long _statusCode;
	NSDictionary* _headerFields;
	NSData* _body;

}

@property (nonatomic,readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSData * body;                            //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) HMFActivity * activity;                 //@synthesize activity=_activity - In the implementation block
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)init;
-(HMFActivity *)activity;
-(NSDictionary *)headerFields;
-(long long)statusCode;
-(void)setActivity:(HMFActivity *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3 ;
@end

