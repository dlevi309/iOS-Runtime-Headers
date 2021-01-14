/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <WatchConnectivity/WCMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface WCMessageResponse : WCMessage <NSSecureCoding> {

	NSError* _error;

}

@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

