/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PCSKeybagKey : NSObject <NSSecureCoding> {

	NSData* _data;
	long long _flags;

}

@property (retain) NSData * data;                //@synthesize data=_data - In the implementation block
@property (assign) long long flags;              //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setFlags:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

