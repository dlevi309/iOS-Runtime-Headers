/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class NSMutableDictionary, NSString;

@interface CIMetalWrapper : CIFilter {

	NSMutableDictionary* _dict;
	NSString* inputFilterName;

}

@property (retain) NSMutableDictionary * _dict;              //@synthesize dict=_dict - In the implementation block
@property (copy) NSString * inputFilterName; 
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)_dict;
-(id)attributes;
-(id)outputImage;
-(id)inputKeys;
-(id)dummyImagesForImages:(id)arg1 ;
-(void)set_dict:(NSMutableDictionary *)arg1 ;
-(NSString *)inputFilterName;
-(void)setInputFilterName:(NSString *)arg1 ;
@end

