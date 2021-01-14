/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSNumber, NSDictionary, NSMutableDictionary;

@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	NSNumber* _pauseTime;
	NSDictionary* _serverTrackInfo;
	NSDate* _skipDate;
	long long _storeIdentifier;

}

@property (nonatomic,copy,readonly) NSDate * expirationDate;                                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy,readonly) NSNumber * pauseTime;                                          //@synthesize pauseTime=_pauseTime - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serverTrackInfo; 
@property (nonatomic,copy,readonly) NSDate * skipDate;                                             //@synthesize skipDate=_skipDate - In the implementation block
@property (nonatomic,readonly) long long storeIdentifier;                                          //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSMutableDictionary *)propertyListRepresentation;
-(id)initWithTrack:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSDictionary *)serverTrackInfo;
-(NSDate *)skipDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)pauseTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

