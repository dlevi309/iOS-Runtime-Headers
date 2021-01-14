/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface TUMomentsCapabilities : NSObject <NSSecureCoding> {

	int _availability;
	NSSet* _supportedMediaTypes;

}

@property (nonatomic,readonly) int availability;                              //@synthesize availability=_availability - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supportedMediaTypes;              //@synthesize supportedMediaTypes=_supportedMediaTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToCapabilities:(id)arg1 ;
-(NSSet *)supportedMediaTypes;
-(id)description;
-(int)availability;
-(id)initWithAvailability:(int)arg1 supportedMediaTypes:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

