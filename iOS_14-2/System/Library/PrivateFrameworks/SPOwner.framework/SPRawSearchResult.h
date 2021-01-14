/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface SPRawSearchResult : NSObject <NSCopying, NSSecureCoding> {

	NSData* _hashedPublicKey;
	NSData* _publicKey;
	long long _status;
	NSDate* _timestamp;
	double _latitude;
	double _longitude;
	double _horizontalAccuracy;

}

@property (nonatomic,copy,readonly) NSData * hashedPublicKey;              //@synthesize hashedPublicKey=_hashedPublicKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * publicKey;                    //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                  //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(NSData *)publicKey;
-(NSDate *)timestamp;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSData *)hashedPublicKey;
-(id)initWithHashedPublicKey:(id)arg1 publicKey:(id)arg2 status:(long long)arg3 timestamp:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 horizontalAccuracy:(double)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(double)horizontalAccuracy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
@end

