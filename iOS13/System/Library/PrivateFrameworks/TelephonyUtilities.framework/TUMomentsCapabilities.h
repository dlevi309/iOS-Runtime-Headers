/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)supportedMediaTypes;
-(int)availability;
-(BOOL)isEqualToCapabilities:(id)arg1 ;
-(id)initWithAvailability:(int)arg1 supportedMediaTypes:(id)arg2 ;
@end

