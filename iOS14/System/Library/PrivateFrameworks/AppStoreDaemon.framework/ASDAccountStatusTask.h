/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ASDClipServiceBroker;
@interface ASDAccountStatusTask : NSObject <NSSecureCoding> {

	id<ASDClipServiceBroker> _broker;
	BOOL _lookupFamilyInfoIfNecessary;

}

@property (assign) BOOL lookupFamilyInfoIfNecessary;              //@synthesize lookupFamilyInfoIfNecessary=_lookupFamilyInfoIfNecessary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)statusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)lookupFamilyInfoIfNecessary;
-(void)setLookupFamilyInfoIfNecessary:(BOOL)arg1 ;
@end

