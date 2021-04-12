/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage, NSArray, _BlastDoorLPVideo;

@interface _BlastDoorLPiTunesMediaSoftwareMetadata : _BlastDoorLPSpecializationMetadata {

	BOOL _isMessagesOnlyApp;
	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _subtitle;
	NSString* _genre;
	NSString* _platform;
	_BlastDoorLPImage* _icon;
	NSArray* _screenshots;
	_BlastDoorLPVideo* _previewVideo;
	_BlastDoorLPImage* _messagesAppIcon;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;                    //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                         //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                                   //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * platform;                                //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSArray * screenshots;                              //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,retain) _BlastDoorLPVideo * previewVideo;                 //@synthesize previewVideo=_previewVideo - In the implementation block
@property (assign,nonatomic) BOOL isMessagesOnlyApp;                           //@synthesize isMessagesOnlyApp=_isMessagesOnlyApp - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * messagesAppIcon;              //@synthesize messagesAppIcon=_messagesAppIcon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)genre;
-(NSString *)platform;
-(NSString *)storeFrontIdentifier;
-(void)setPlatform:(NSString *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(NSArray *)screenshots;
-(void)setScreenshots:(NSArray *)arg1 ;
-(_BlastDoorLPVideo *)previewVideo;
-(void)setPreviewVideo:(_BlastDoorLPVideo *)arg1 ;
-(BOOL)isMessagesOnlyApp;
-(void)setIsMessagesOnlyApp:(BOOL)arg1 ;
-(_BlastDoorLPImage *)messagesAppIcon;
-(void)setMessagesAppIcon:(_BlastDoorLPImage *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(_BlastDoorLPImage *)icon;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(NSString *)name;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

