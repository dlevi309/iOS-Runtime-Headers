/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)genre;
-(NSNumber *)genreID;
-(void)setGenre:(NSString *)arg1 ;
-(void)setGenreID:(NSNumber *)arg1 ;
-(id)initWithGenre:(id)arg1 genreID:(id)arg2 ;
@end

