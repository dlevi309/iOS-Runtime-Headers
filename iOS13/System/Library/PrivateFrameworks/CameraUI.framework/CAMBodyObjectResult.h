/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <libobjc.A.dylib/CAMMetadataObjectResult.h>

@class NSString, AVMetadataBodyObject, AVMetadataObject;

@interface CAMBodyObjectResult : NSObject <CAMMetadataObjectResult> {

	NSString* _uniqueIdentifier;
	AVMetadataBodyObject* __metadataBodyObject;

}

@property (nonatomic,retain) AVMetadataBodyObject * _metadataBodyObject;                 //@synthesize _metadataBodyObject=__metadataBodyObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * metadataType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVMetadataObject * underlyingMetadataObject; 
-(NSString *)uniqueIdentifier;
-(NSString *)metadataType;
-(AVMetadataObject *)underlyingMetadataObject;
-(id)initWithBodyObject:(id)arg1 ;
-(AVMetadataBodyObject *)_metadataBodyObject;
-(void)set_metadataBodyObject:(AVMetadataBodyObject *)arg1 ;
@end

