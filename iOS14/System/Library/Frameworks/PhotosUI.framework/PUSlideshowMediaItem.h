/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class MPMediaItem, OKProducerPreset, NSURL, NSString;

@interface PUSlideshowMediaItem : NSObject {

	MPMediaItem* _mediaItem;
	OKProducerPreset* _preset;
	long long _type;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * audioURL; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)mediaItemsForOKThemes;
+(id)mediaItemForType:(long long)arg1 uniqueIdentifier:(id)arg2 ;
-(NSString *)localizedName;
-(id)_initWithType:(long long)arg1 ;
-(id)initWitPreset:(id)arg1 ;
-(id)initWitMediaItem:(id)arg1 ;
-(id)init;
-(NSString *)uniqueIdentifier;
-(long long)type;
-(unsigned long long)hash;
-(NSURL *)audioURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

