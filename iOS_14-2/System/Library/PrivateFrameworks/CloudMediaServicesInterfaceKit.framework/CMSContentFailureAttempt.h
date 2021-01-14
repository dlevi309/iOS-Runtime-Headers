/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/

#import <libobjc.A.dylib/CMSCoding.h>

@class NSDate, NSString;

@interface CMSContentFailureAttempt : NSObject <CMSCoding> {

	unsigned long long _failure;
	NSDate* _timestamp;
	NSString* _result;
	NSString* _body;

}

@property (nonatomic,readonly) unsigned long long failure;              //@synthesize failure=_failure - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSDate *)timestamp;
-(NSString *)result;
-(unsigned long long)failure;
-(id)initWithFailure:(unsigned long long)arg1 ;
-(id)cmsCoded;
@end

