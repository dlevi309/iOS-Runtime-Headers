/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface BRCPersistedState : NSObject <NSObject, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _assertionQueue;

}

@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> assertionQueue;              //@synthesize assertionQueue=_assertionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 ;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(id)initWithCoder:(id)arg1 ;
-(void)setAssertionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)assertQueue;
@end

