/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding> {

	unsigned long long _lastSupportedMessageType;

}

@property (nonatomic,readonly) unsigned long long lastSupportedMessageType;              //@synthesize lastSupportedMessageType=_lastSupportedMessageType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)lastSupportedMessageType;
-(BOOL)isSupported:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLastSupportedMessageType:(unsigned long long)arg1 ;
@end

