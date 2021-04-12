/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@class NSMutableArray, NSMutableData;

@interface PTPDevicePropDescDataset : NSObject {

	unsigned short _devicePropertyCode;
	unsigned short _dataTypeCode;
	unsigned char _readWriteAttribute;
	id _factoryDefaultValue;
	id _currentValue;
	unsigned char _formFlag;
	id _minimumValue;
	id _maximumValue;
	id _stepSize;
	unsigned short _numberOfValues;
	NSMutableArray* _supportedValues;
	NSMutableData* _content;
	BOOL _dirty;
	BOOL _readOnlyObject;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(id)stepSize;
-(id)content;
-(void)updateContent;
-(void)setMinimumValue:(id)arg1 ;
-(void)setMaximumValue:(id)arg1 ;
-(id)minimumValue;
-(id)maximumValue;
-(void)setContent:(id)arg1 ;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(void)setStepSize:(id)arg1 ;
-(id)initWithMutableData:(id)arg1 ;
-(unsigned short)devicePropertyCode;
-(void)setDevicePropertyCode:(unsigned short)arg1 ;
-(unsigned short)dataTypeCode;
-(void)setDataTypeCode:(unsigned short)arg1 ;
-(unsigned char)readWriteAttribute;
-(void)setReadWriteAttribute:(unsigned char)arg1 ;
-(id)factoryDefaultValue;
-(void)setFactoryDefaultValue:(id)arg1 ;
-(unsigned char)formFlag;
-(void)setFormFlag:(unsigned char)arg1 ;
-(unsigned short)numberOfValues;
-(void)setNumberOfValues:(unsigned short)arg1 ;
-(id)supportedValues;
-(void)setSupportedValues:(id)arg1 ;
@end

