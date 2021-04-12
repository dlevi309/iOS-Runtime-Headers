/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface RTIDataPayload : NSObject <NSSecureCoding> {

	unsigned long long _version;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)payloadWithData:(id)arg1 ;
+(id)payloadWithData:(id)arg1 version:(unsigned long long)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 version:(unsigned long long)arg2 ;
@end

