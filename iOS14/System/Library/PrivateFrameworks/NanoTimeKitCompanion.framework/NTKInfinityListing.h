/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NTKAVListing.h>

@class CLKDevice, NSString, CLKVideo, UIImage, NTKInfinityListingAttributes;

@interface NTKInfinityListing : NSObject <NSCopying, NTKAVListing> {

	CLKDevice* _device;
	NSString* _filename;
	CLKVideo* _video;
	UIImage* _image;
	unsigned long long _type;
	unsigned long long _playback;
	NTKInfinityListingAttributes* _attributes;

}

@property (assign,nonatomic) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long playback;                            //@synthesize playback=_playback - In the implementation block
@property (nonatomic,retain) NTKInfinityListingAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listingForDevice:(id)arg1 withFilename:(id)arg2 ;
+(id)listingForDevice:(id)arg1 withFilename:(id)arg2 type:(unsigned long long)arg3 attributes:(id)arg4 ;
-(void)setAttributes:(NTKInfinityListingAttributes *)arg1 ;
-(CLKVideo *)video;
-(NSString *)debugDescription;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)playback;
-(UIImage *)image;
-(NTKInfinityListingAttributes *)attributes;
-(NSString *)description;
-(unsigned long long)type;
-(void)setPlayback:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)complicationColor;
-(BOOL)snapshotDiffers:(id)arg1 ;
-(void)discardAssets;
-(id)initForDevice:(id)arg1 withFilename:(id)arg2 ;
@end

