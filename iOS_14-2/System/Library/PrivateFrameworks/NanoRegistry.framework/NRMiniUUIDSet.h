/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NRMiniUUIDSet : NSObject <NSCopying, NSSecureCoding> {

	vector<unsigned int, std::__1::allocator<unsigned int> >* _miniUUIDs;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUIDSet:(id)arg1 ;
@end

