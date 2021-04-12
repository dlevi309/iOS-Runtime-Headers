/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TUHandle *)handle;
-(NSString *)isoCountryCode;
-(id)initWithHandle:(id)arg1 ;
-(BOOL)isEqualToMetadataDestinationID:(id)arg1 ;
-(id)initWithDestinationID:(id)arg1 isoCountryCode:(id)arg2 ;
@end

