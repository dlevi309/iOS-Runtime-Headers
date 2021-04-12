/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)type;
-(NSString *)stringValue;
-(NSString *)formattedStringValue;
-(void)setObjectInternal:(CRCameraReaderOutputInternal *)arg1 ;
-(CRCameraReaderOutputInternal *)objectInternal;
-(id)initWithImageReaderOutput:(id)arg1 ;
@end

