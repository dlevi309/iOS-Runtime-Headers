/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/_CUIRawDataRendition.h>

@interface _CUIRecognitionObjectRendition : _CUIRawDataRendition {

	int _objectVersion;
	SCD_Struct_CS10 _transformation;

}
-(int)objectVersion;
-(SCD_Struct_CS10)transformation;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
@end

