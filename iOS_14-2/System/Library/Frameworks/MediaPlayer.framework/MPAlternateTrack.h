/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, AVMediaSelectionOption;

@interface MPAlternateTrack : NSObject {

	NSString* _displayName;
	NSString* _canonicalLanguageIdentifier;
	AVMediaSelectionOption* _option;
	BOOL _isMainProgram;
	BOOL _isDVS;

}

@property (nonatomic,retain) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) AVMediaSelectionOption * option;                     //@synthesize option=_option - In the implementation block
@property (nonatomic,readonly) BOOL isMainProgram;                                  //@synthesize isMainProgram=_isMainProgram - In the implementation block
@property (nonatomic,readonly) BOOL isDVS;                                          //@synthesize isDVS=_isDVS - In the implementation block
@property (nonatomic,readonly) NSString * canonicalLanguageIdentifier;              //@synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier - In the implementation block
+(id)threeCharCodesForEncodedISO639_2_T:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isDVS;
-(AVMediaSelectionOption *)option;
-(NSString *)canonicalLanguageIdentifier;
-(id)initWithOption:(id)arg1 ;
-(void)_setDisplayNameFromOption:(id)arg1 ;
-(BOOL)isMainProgram;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

