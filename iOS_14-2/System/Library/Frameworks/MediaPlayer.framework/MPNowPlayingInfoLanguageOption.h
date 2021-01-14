/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSArray;

@interface MPNowPlayingInfoLanguageOption : NSObject {

	void* _mrLanguageOption;

}

@property (nonatomic,readonly) void* mrLanguageOption;                               //@synthesize mrLanguageOption=_mrLanguageOption - In the implementation block
@property (nonatomic,readonly) unsigned long long languageOptionType; 
@property (nonatomic,readonly) NSString * languageTag; 
@property (nonatomic,readonly) NSArray * languageOptionCharacteristics; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * identifier; 
-(id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5 ;
-(id)initWithMRLanguageOption:(void*)arg1 ;
-(BOOL)isAutomaticLegibleLanguageOption;
-(BOOL)isAutomaticAudibleLanguageOption;
-(unsigned long long)languageOptionType;
-(NSArray *)languageOptionCharacteristics;
-(id)copyExternalRepresentation;
-(BOOL)isEqualToLanguageOption:(id)arg1 ;
-(void*)mrLanguageOption;
-(NSString *)languageTag;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)dealloc;
@end

