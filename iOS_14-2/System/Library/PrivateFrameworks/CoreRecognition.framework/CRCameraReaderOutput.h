/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
*/


@class CRCameraReaderOutputInternal, NSString;

@interface CRCameraReaderOutput : NSObject {

	CRCameraReaderOutputInternal* _objectInternal;

}

@property (retain) CRCameraReaderOutputInternal * objectInternal;              //@synthesize objectInternal=_objectInternal - In the implementation block
@property (readonly) NSString * type; 
@property (readonly) NSString * stringValue; 
@property (readonly) NSString * formattedStringValue; 
-(id)init;
-(NSString *)stringValue;
-(NSString *)type;
-(NSString *)formattedStringValue;
-(void)dealloc;
-(void)setObjectInternal:(CRCameraReaderOutputInternal *)arg1 ;
-(CRCameraReaderOutputInternal *)objectInternal;
-(id)initWithImageReaderOutput:(id)arg1 ;
@end

