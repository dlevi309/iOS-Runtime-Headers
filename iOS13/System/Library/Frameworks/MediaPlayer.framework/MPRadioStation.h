/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(long long)uniqueIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)stationStringID;
-(id)initWithPlayParameters:(id)arg1 ;
-(id)initWithModelStation:(id)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
@end

