/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface PKDiscoveryTimeTrigger : PKDiscoveryTrigger <NSSecureCoding, NSCopying> {

	NSDate* _time;

}

@property (nonatomic,readonly) NSDate * time;              //@synthesize time=_time - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)time;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

