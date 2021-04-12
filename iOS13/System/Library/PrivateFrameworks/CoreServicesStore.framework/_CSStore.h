/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)initialize;
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initByMovingStore:(Store*)arg1 ;
-(id)initWithError:(id*)arg1 ;
-(void)setExpectedAccessQueue:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 error:(id*)arg2 ;
@end

