/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PPMockRTLocation *)location;
-(void)setLocation:(PPMockRTLocation *)arg1 ;
-(NSString *)name;
-(PPMockRTAddress *)address;
-(void)setAddress:(PPMockRTAddress *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

