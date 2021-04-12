/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)statusCode;
-(HMFActivity *)activity;
-(void)setActivity:(HMFActivity *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
@end

