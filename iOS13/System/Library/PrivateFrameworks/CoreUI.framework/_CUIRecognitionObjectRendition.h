/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/_CUIRawDataRendition.h>

@interface _CUIRecognitionObjectRendition : _CUIRawDataRendition {

	int _objectVersion;
	SCD_Struct_CS10 _transformation;

}
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(int)objectVersion;
-(SCD_Struct_CS10)transformation;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
@end

