/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPGameCenterInvitationMetadata : _BlastDoorLPSpecializationMetadata {

	unsigned _numberOfPlayers;
	unsigned _minimumNumberOfPlayers;
	unsigned _maximumNumberOfPlayers;
	NSString* _game;
	_BlastDoorLPImage* _image;
	_BlastDoorLPImage* _icon;

}

@property (nonatomic,copy) NSString * game;                                //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                     //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned numberOfPlayers;                     //@synthesize numberOfPlayers=_numberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned minimumNumberOfPlayers;              //@synthesize minimumNumberOfPlayers=_minimumNumberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfPlayers;              //@synthesize maximumNumberOfPlayers=_maximumNumberOfPlayers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)game;
-(void)setImage:(_BlastDoorLPImage *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(unsigned)numberOfPlayers;
-(void)setNumberOfPlayers:(unsigned)arg1 ;
-(unsigned)minimumNumberOfPlayers;
-(void)setMinimumNumberOfPlayers:(unsigned)arg1 ;
-(unsigned)maximumNumberOfPlayers;
-(void)setMaximumNumberOfPlayers:(unsigned)arg1 ;
-(_BlastDoorLPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(_BlastDoorLPImage *)image;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setGame:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

