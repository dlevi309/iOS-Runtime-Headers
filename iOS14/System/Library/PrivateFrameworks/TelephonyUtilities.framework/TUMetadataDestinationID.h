/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TUHandle, NSString;

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying> {

	TUHandle* _handle;

}

@property (nonatomic,readonly) TUHandle * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * isoCountryCode; 
+(BOOL)supportsSecureCoding;
+(id)metadataDestinationIDsForCHRecentCalls:(id)arg1 ;
+(id)metadataDestinationIDsForCHRecentCall:(id)arg1 ;
+(id)metadataDestinationIDForCall:(id)arg1 ;
-(id)initWithHandle:(id)arg1 ;
-(id)initWithDestinationID:(id)arg1 isoCountryCode:(id)arg2 ;
-(TUHandle *)handle;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)isoCountryCode;
-(BOOL)isEqualToMetadataDestinationID:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

