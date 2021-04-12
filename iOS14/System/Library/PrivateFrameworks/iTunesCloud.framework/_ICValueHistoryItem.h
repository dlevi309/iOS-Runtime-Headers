/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ICValueHistoryItem : NSObject <NSSecureCoding> {

	unsigned long long _timestamp;
	id _value;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id value;                                  //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

