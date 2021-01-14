/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CKServerChangeToken : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

