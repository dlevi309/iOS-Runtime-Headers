/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(long long)flags;
-(void)setData:(NSData *)arg1 ;
-(void)setFlags:(long long)arg1 ;
@end

