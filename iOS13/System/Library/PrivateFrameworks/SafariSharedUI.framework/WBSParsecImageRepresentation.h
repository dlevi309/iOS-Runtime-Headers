/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariShared/WBSParsecModel.h>

@protocol OS_dispatch_group;
@class NSString, UIImage, NSObject, NSNumber;

@interface WBSParsecImageRepresentation : WBSParsecModel {

	NSString* _dataString;
	NSString* _identifier;
	NSString* _imageURLString;
	UIImage* _image;
	BOOL _template;
	NSObject*<OS_dispatch_group> _downloadGroup;
	NSNumber* _baselineOffset;
	NSNumber* _roundCornerRadius;

}

@property (nonatomic,readonly) NSNumber * baselineOffset;                 //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,readonly) NSNumber * roundCornerRadius;              //@synthesize roundCornerRadius=_roundCornerRadius - In the implementation block
+(id)schema;
+(id)_bagImageDataCache;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)baselineOffset;
-(id)initWithJSONObject:(id)arg1 ;
-(id)_imageWithData:(id)arg1 ;
-(id)imageWithSession:(id)arg1 ;
-(void)_fetchImageData;
-(id)imageWithScaleFactor:(double)arg1 ;
-(id)_templateImageWithImage:(id)arg1 ;
-(void)_fetchImageDataUsingBlock:(/*^block*/id)arg1 ;
-(id)test_data;
-(id)test_identifier;
-(id)test_imageURLString;
-(BOOL)test_isTemplate;
-(NSNumber *)roundCornerRadius;
@end

