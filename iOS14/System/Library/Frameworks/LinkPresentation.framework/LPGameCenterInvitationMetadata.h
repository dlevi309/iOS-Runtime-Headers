/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>

@class NSString, LPImage;

@interface LPGameCenterInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility> {

	unsigned _numberOfPlayers;
	unsigned _minimumNumberOfPlayers;
	unsigned _maximumNumberOfPlayers;
	NSString* _game;
	LPImage* _image;
	LPImage* _icon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * game;                                //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) LPImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned numberOfPlayers;                     //@synthesize numberOfPlayers=_numberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned minimumNumberOfPlayers;              //@synthesize minimumNumberOfPlayers=_minimumNumberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfPlayers;              //@synthesize maximumNumberOfPlayers=_maximumNumberOfPlayers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)game;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(unsigned)numberOfPlayers;
-(void)setNumberOfPlayers:(unsigned)arg1 ;
-(unsigned)minimumNumberOfPlayers;
-(void)setMinimumNumberOfPlayers:(unsigned)arg1 ;
-(unsigned)maximumNumberOfPlayers;
-(void)setMaximumNumberOfPlayers:(unsigned)arg1 ;
-(LPImage *)icon;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(LPImage *)arg1 ;
-(id)invitationText;
-(id)playerCountText;
-(LPImage *)image;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setGame:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

