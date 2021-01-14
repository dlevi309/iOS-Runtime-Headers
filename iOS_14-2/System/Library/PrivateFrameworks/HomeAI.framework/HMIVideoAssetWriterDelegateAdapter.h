/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoAssetWriterDelegate.h>

@class NSString;

@interface HMIVideoAssetWriterDelegateAdapter : HMFObject <HMIVideoAssetWriterDelegate> {

	/*^block*/id _assetWriterDidOutputInitializationSegment;
	/*^block*/id _assetWriterDidOutputSeparableSegment;
	/*^block*/id _assetWriterDidFailWithError;

}

@property (copy) id assetWriterDidOutputInitializationSegment;              //@synthesize assetWriterDidOutputInitializationSegment=_assetWriterDidOutputInitializationSegment - In the implementation block
@property (copy) id assetWriterDidOutputSeparableSegment;                   //@synthesize assetWriterDidOutputSeparableSegment=_assetWriterDidOutputSeparableSegment - In the implementation block
@property (copy) id assetWriterDidFailWithError;                            //@synthesize assetWriterDidFailWithError=_assetWriterDidFailWithError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAssetWriterDidOutputInitializationSegment:(id)arg1 ;
-(void)setAssetWriterDidOutputSeparableSegment:(id)arg1 ;
-(void)assetWriter:(id)arg1 didOutputInitializationSegment:(id)arg2 ;
-(void)assetWriter:(id)arg1 didOutputSeparableSegment:(id)arg2 timeRange:(SCD_Struct_HM4)arg3 ;
-(void)assetWriter:(id)arg1 didFailWithError:(id)arg2 ;
-(id)assetWriterDidOutputInitializationSegment;
-(id)assetWriterDidOutputSeparableSegment;
-(id)assetWriterDidFailWithError;
-(void)setAssetWriterDidFailWithError:(id)arg1 ;
@end

