/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@interface ASDCheckQueueRequestOptions : ASDRequestOptions {

	unsigned long long _reason;

}

@property (assign,nonatomic) unsigned long long reason;              //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithReason:(unsigned long long)arg1 ;
-(unsigned long long)reason;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

