/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithOption:(id)arg1 ;
-(void)_setDisplayNameFromOption:(id)arg1 ;
-(NSString *)canonicalLanguageIdentifier;
-(AVMediaSelectionOption *)option;
-(BOOL)isMainProgram;
-(BOOL)isDVS;
@end

