/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * metadataType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVMetadataObject * underlyingMetadataObject; 
-(NSString *)uniqueIdentifier;
-(NSString *)metadataType;
-(BOOL)isOfSignificantSize;
-(AVMetadataMachineReadableCodeObject *)underlyingMachineReadableCodeObject;
-(id)initWithMachineReadableCodeObject:(id)arg1 ;
-(AVMetadataObject *)underlyingMetadataObject;
-(NSString *)symbolString;
@end

