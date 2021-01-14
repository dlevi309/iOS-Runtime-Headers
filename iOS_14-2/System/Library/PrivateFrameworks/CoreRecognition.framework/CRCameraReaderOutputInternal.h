/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
*/


#import <CoreRecognition/CoreRecognition-Structs.h>
@class NSString, NSArray, NSNumber, UIImage, NSAttributedString;

@interface CRCameraReaderOutputInternal : NSObject {

	NSString* _type;
	NSArray* _vertices;
	NSString* _stringValue;
	NSNumber* _yearValue;
	NSNumber* _monthValue;
	NSNumber* _dayValue;
	UIImage* _imageValue;
	NSAttributedString* overlayString;
	CGRect boundingBox;
	float rotation;
	float _rotation;
	NSString* _formattedStringValue;
	NSAttributedString* _overlayString;
	CGRect _boundingBox;

}

@property (retain) NSString * type;                                 //@synthesize type=_type - In the implementation block
@property (retain) NSArray * vertices;                              //@synthesize vertices=_vertices - In the implementation block
@property (retain) NSString * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (retain) NSString * formattedStringValue;                 //@synthesize formattedStringValue=_formattedStringValue - In the implementation block
@property (retain) NSNumber * yearValue;                            //@synthesize yearValue=_yearValue - In the implementation block
@property (retain) NSNumber * monthValue;                           //@synthesize monthValue=_monthValue - In the implementation block
@property (retain) NSNumber * dayValue;                             //@synthesize dayValue=_dayValue - In the implementation block
@property (retain) UIImage * imageValue;                            //@synthesize imageValue=_imageValue - In the implementation block
@property (retain) NSAttributedString * overlayString;              //@synthesize overlayString=_overlayString - In the implementation block
@property (assign) CGRect boundingBox;                              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign) float rotation;                                  //@synthesize rotation=_rotation - In the implementation block
-(void)setRotation:(float)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(float)rotation;
-(NSNumber *)monthValue;
-(void)setType:(NSString *)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setOverlayString:(NSAttributedString *)arg1 ;
-(CGRect)boundingBox;
-(UIImage *)imageValue;
-(NSString *)type;
-(NSAttributedString *)overlayString;
-(NSNumber *)dayValue;
-(NSArray *)vertices;
-(void)setVertices:(NSArray *)arg1 ;
-(NSString *)formattedStringValue;
-(NSNumber *)yearValue;
-(void)setFormattedStringValue:(NSString *)arg1 ;
-(void)setYearValue:(NSNumber *)arg1 ;
-(void)setMonthValue:(NSNumber *)arg1 ;
-(void)setDayValue:(NSNumber *)arg1 ;
-(void)setImageValue:(UIImage *)arg1 ;
@end

