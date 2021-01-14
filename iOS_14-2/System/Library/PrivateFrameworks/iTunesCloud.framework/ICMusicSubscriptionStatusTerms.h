/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICMusicSubscriptionStatusTerms : NSObject <NSCopying, NSSecureCoding> {

	long long _acceptedVersion;
	long long _currentVersion;
	long long _sourceType;
	long long _type;

}

@property (nonatomic,readonly) long long acceptedVersion;              //@synthesize acceptedVersion=_acceptedVersion - In the implementation block
@property (nonatomic,readonly) long long currentVersion;               //@synthesize currentVersion=_currentVersion - In the implementation block
@property (nonatomic,readonly) long long sourceType;                   //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)sourceType;
-(id)initWithResponseTermsDictionary:(id)arg1 ;
-(long long)acceptedVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)currentVersion;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

