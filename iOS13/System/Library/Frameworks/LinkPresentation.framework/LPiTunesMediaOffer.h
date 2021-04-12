/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSURL, NSString;

@interface LPiTunesMediaOffer : NSObject {

	BOOL _hasAudio;
	BOOL _hasVideo;
	NSURL* _previewURL;
	NSString* _type;

}

@property (nonatomic,copy,readonly) NSURL * previewURL;              //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasAudio;                        //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,readonly) BOOL hasVideo;                        //@synthesize hasVideo=_hasVideo - In the implementation block
+(id)typeForOffer:(id)arg1 ;
+(id)previewURLForOffer:(id)arg1 ;
+(BOOL)hasAudioForOffer:(id)arg1 ;
+(BOOL)hasVideoForOffer:(id)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasVideo;
-(NSURL *)previewURL;
-(BOOL)hasAudio;
@end

