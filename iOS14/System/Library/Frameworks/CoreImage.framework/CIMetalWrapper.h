/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)_dict;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)attributes;
-(id)inputKeys;
-(id)outputImage;
-(void)set_dict:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(NSString *)inputFilterName;
-(id)dummyImagesForImages:(id)arg1 ;
-(void)setInputFilterName:(NSString *)arg1 ;
@end

