/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CTSubscriberAuthDataHolder : NSObject <NSSecureCoding> {

	NSDictionary* _dict;

}

@property (nonatomic,retain) NSDictionary * dict;              //@synthesize dict=_dict - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDict:(NSDictionary *)arg1 ;
-(NSDictionary *)dict;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

