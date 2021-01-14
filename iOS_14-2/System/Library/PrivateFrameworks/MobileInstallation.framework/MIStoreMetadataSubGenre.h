/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
*/

#import <MobileInstallation/MobileInstallation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface MIStoreMetadataSubGenre : NSObject <NSSecureCoding, NSCopying> {

	NSString* _genre;
	NSNumber* _genreID;

}

@property (nonatomic,copy) NSString * genre;                                         //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) NSNumber * genreID;                                     //@synthesize genreID=_genreID - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSNumber *)genreID;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)genre;
-(void)setGenre:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithGenre:(id)arg1 genreID:(id)arg2 ;
-(void)setGenreID:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

