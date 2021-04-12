/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRadioPlaybackHistoryItem, NSString, NSArray, NSDictionary;

@interface ICRadioPlaybackHistory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	ICRadioPlaybackHistoryItem* _currentTrack;
	long long _numberOfSkips;
	NSString* _stationIdentifier;
	NSArray* _tracks;

}

@property (nonatomic,copy,readonly) NSString * stationIdentifier;                           //@synthesize stationIdentifier=_stationIdentifier - In the implementation block
@property (nonatomic,readonly) long long numberOfSkips;                                     //@synthesize numberOfSkips=_numberOfSkips - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tracks; 
@property (nonatomic,copy,readonly) ICRadioPlaybackHistoryItem * currentTrack;              //@synthesize currentTrack=_currentTrack - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)propertyListRepresentation;
-(id)initWithStationIdentifier:(id)arg1 ;
-(long long)numberOfSkips;
-(ICRadioPlaybackHistoryItem *)currentTrack;
-(NSArray *)tracks;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stationIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

