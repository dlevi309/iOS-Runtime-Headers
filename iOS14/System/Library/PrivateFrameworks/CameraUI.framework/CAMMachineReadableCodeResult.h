/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <libobjc.A.dylib/CAMMetadataObjectResult.h>

@class NSString, AVMetadataMachineReadableCodeObject, AVMetadataObject;

@interface CAMMachineReadableCodeResult : NSObject <CAMMetadataObjectResult> {

	NSString* _uniqueIdentifier;
	AVMetadataMachineReadableCodeObject* _underlyingMachineReadableCodeObject;

}

@property (nonatomic,readonly) AVMetadataMachineReadableCodeObject * underlyingMachineReadableCodeObject;              //@synthesize underlyingMachineReadableCodeObject=_underlyingMachineReadableCodeObject - In the implementation block
@property (nonatomic,readonly) NSString * symbolString; 
@property (nonatomic,copy,readonly) NSString * metadataType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVMetadataObject * underlyingMetadataObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueIdentifier;
-(NSString *)metadataType;
-(BOOL)isOfSignificantSize;
-(AVMetadataMachineReadableCodeObject *)underlyingMachineReadableCodeObject;
-(id)initWithMachineReadableCodeObject:(id)arg1 ;
-(AVMetadataObject *)underlyingMetadataObject;
-(NSString *)symbolString;
@end

