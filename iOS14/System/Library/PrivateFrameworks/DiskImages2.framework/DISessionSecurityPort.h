/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMachPort;

@interface DISessionSecurityPort : NSObject <NSSecureCoding, NSCoding> {

	NSMachPort* _port;

}

@property (retain) NSMachPort * port;              //@synthesize port=_port - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPort:(NSMachPort *)arg1 ;
-(NSMachPort *)port;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

