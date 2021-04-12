/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)currentVersion;
-(long long)sourceType;
-(id)initWithResponseTermsDictionary:(id)arg1 ;
-(long long)acceptedVersion;
@end

