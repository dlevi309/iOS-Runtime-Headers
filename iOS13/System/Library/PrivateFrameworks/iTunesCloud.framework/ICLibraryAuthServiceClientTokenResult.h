/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ICLibraryAuthServiceClientTokenIdentifier, NSDate;

@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _token;
	long long _generatedAtMillis;
	long long _timeToLiveMillis;
	long long _lifespanMillis;
	ICLibraryAuthServiceClientTokenIdentifier* _tokenIdentitifer;

}

@property (nonatomic,copy,readonly) NSString * token;                                                          //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) long long generatedAtMillis;                                                    //@synthesize generatedAtMillis=_generatedAtMillis - In the implementation block
@property (nonatomic,readonly) long long timeToLiveMillis;                                                     //@synthesize timeToLiveMillis=_timeToLiveMillis - In the implementation block
@property (nonatomic,readonly) long long lifespanMillis;                                                       //@synthesize lifespanMillis=_lifespanMillis - In the implementation block
@property (nonatomic,copy,readonly) ICLibraryAuthServiceClientTokenIdentifier * tokenIdentitifer;              //@synthesize tokenIdentitifer=_tokenIdentitifer - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL isExpired; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(long long)timeToLiveMillis;
-(id)initWithResponseDictionary:(id)arg1 ;
-(long long)generatedAtMillis;
-(long long)lifespanMillis;
-(ICLibraryAuthServiceClientTokenIdentifier *)tokenIdentitifer;
@end

