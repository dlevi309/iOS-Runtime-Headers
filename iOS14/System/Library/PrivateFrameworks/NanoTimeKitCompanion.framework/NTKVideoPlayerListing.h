/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NTKAVListing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice, CLKVideo, NSString, UIImage, UIColor, NSArray;

@interface NTKVideoPlayerListing : NSObject <NTKAVListing, NSCopying> {

	CLKDevice* _device;
	CLKVideo* _video;
	NSString* _filename;
	UIImage* _image;
	UIColor* _color;
	NSArray* _attributes;
	unsigned long long _endBehavior;

}

@property (nonatomic,retain) NSArray * attributes;                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) UIColor * color;                             //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) unsigned long long endBehavior;              //@synthesize endBehavior=_endBehavior - In the implementation block
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listingForDevice:(id)arg1 withFilename:(id)arg2 ;
+(id)listingForDevice:(id)arg1 withFilename:(id)arg2 andColor:(id)arg3 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(CLKVideo *)video;
-(UIColor *)color;
-(NSString *)debugDescription;
-(UIImage *)image;
-(NSArray *)attributes;
-(NSString *)description;
-(void)setColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)endBehavior;
-(void)setEndBehavior:(unsigned long long)arg1 ;
-(BOOL)snapshotDiffers:(id)arg1 ;
-(void)discardAssets;
-(id)initForDevice:(id)arg1 withFilename:(id)arg2 ;
@end

