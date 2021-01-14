/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPRadioStation : NSObject <NSCopying, NSSecureCoding> {

	long long _uniqueIdentifier;
	NSString* _localizedName;
	NSString* _localizedDescription;
	NSString* _stationStringID;

}

@property (nonatomic,copy) NSString * stationStringID;                   //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) long long uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)uniqueIdentifier;
-(id)initWithPlayParameters:(id)arg1 ;
-(id)initWithModelStation:(id)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)stationStringID;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

