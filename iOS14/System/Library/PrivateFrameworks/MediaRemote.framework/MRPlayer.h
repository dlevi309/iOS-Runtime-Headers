/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSData;

@interface MRPlayer : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _displayName;
	long long _audioSessionType;
	NSSet* _mxSessionIDs;

}

@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                     //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long audioSessionType;                               //@synthesize audioSessionType=_audioSessionType - In the implementation block
@property (nonatomic,copy) NSSet * mxSessionIDs;                                       //@synthesize mxSessionIDs=_mxSessionIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryProperties; 
@property (nonatomic,readonly) MRPlayer * skeleton; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (getter=isDefaultPlayer,nonatomic,readonly) BOOL defaultPlayer; 
+(id)anyPlayer;
+(id)defaultPlayer;
-(MRPlayer *)skeleton;
-(BOOL)hasAuxiliaryProperties;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setMxSessionIDs:(NSSet *)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)data;
-(long long)audioSessionType;
-(BOOL)isDefaultPlayer;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 ;
-(NSSet *)mxSessionIDs;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setAudioSessionType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

