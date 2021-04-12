/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMFWoBLEInfo : HMFObject <NSSecureCoding> {

	NSData* _bleIdentifier;

}

@property (nonatomic,readonly) NSData * bleIdentifier;              //@synthesize bleIdentifier=_bleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)bleIdentifier;
-(id)initWithBLEIdentifier:(id)arg1 ;
@end

