/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ASDIAPInfoResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	NSDictionary* _iaps;

}

@property (nonatomic,readonly) NSDictionary * iaps;              //@synthesize iaps=_iaps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIAPs:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)iaps;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

