/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioContentReference.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {

	NSString* _artistName;
	NSNumber* _representativeCloudIdentifier;
	NSNumber* _storeIdentifier;

}

@property (nonatomic,copy) NSString * artistName;                                 //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudIdentifier;              //@synthesize representativeCloudIdentifier=_representativeCloudIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeIdentifier;                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)rawContentDictionary;
-(id)matchDictionary;
-(NSNumber *)representativeCloudIdentifier;
-(void)setRepresentativeCloudIdentifier:(NSNumber *)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(long long)contentType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)artistName;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)storeIdentifier;
@end

