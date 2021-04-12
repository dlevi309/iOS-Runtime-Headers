/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString, PPMockRTAddress, PPMockRTLocation;

@interface PPMockRTMapItem : NSObject {

	NSString* _name;
	PPMockRTAddress* _address;
	PPMockRTLocation* _location;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) PPMockRTAddress * address;                //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) PPMockRTLocation * location;              //@synthesize location=_location - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(PPMockRTAddress *)address;
-(PPMockRTLocation *)location;
-(void)setLocation:(PPMockRTLocation *)arg1 ;
-(void)setAddress:(PPMockRTAddress *)arg1 ;
@end

