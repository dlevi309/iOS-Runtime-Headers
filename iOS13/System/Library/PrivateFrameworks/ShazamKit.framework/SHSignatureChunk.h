/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface SHSignatureChunk : NSObject <NSSecureCoding> {

	double _length;
	NSData* _data;

}

@property (nonatomic,readonly) double length;              //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)length;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 length:(double)arg2 ;
@end

