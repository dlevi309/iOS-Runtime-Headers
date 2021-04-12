/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)payloadWithData:(id)arg1 version:(unsigned long long)arg2 ;
+(id)payloadWithData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)version;
-(id)initWithData:(id)arg1 version:(unsigned long long)arg2 ;
@end

