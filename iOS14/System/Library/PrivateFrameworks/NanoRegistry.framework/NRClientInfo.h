/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NRClientInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _processName;

}

@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)processName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

