/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
*/

#import <CoreServicesStore/CoreServicesStore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _CSStore : NSObject <NSSecureCoding> {

	Store* _store;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)new;
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)initWithError:(id*)arg1 ;
-(id)init;
-(void)setExpectedAccessQueue:(id)arg1 ;
-(id)initByMovingStore:(Store*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 error:(id*)arg2 ;
@end

