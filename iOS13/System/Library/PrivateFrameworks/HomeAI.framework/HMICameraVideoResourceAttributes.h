/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSDate, NSString;

@interface HMICameraVideoResourceAttributes : HMFObject <HMFLogging> {

	NSDate* _creationDate;
	unsigned long long _lastSequenceNumber;
	unsigned long long _firstSequenceNumber;
	double _nominalFrameRate;
	CGSize _dimensions;
	SCD_Struct_HM4 _assetDuration;

}

@property (readonly) SCD_Struct_HM4 assetDuration;                        //@synthesize assetDuration=_assetDuration - In the implementation block
@property (readonly) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) unsigned long long lastSequenceNumber;               //@synthesize lastSequenceNumber=_lastSequenceNumber - In the implementation block
@property (readonly) unsigned long long firstSequenceNumber;              //@synthesize firstSequenceNumber=_firstSequenceNumber - In the implementation block
@property (readonly) double nominalFrameRate;                             //@synthesize nominalFrameRate=_nominalFrameRate - In the implementation block
@property (readonly) CGSize dimensions;                                   //@synthesize dimensions=_dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)creationDate;
-(CGSize)dimensions;
-(double)nominalFrameRate;
-(SCD_Struct_HM4)assetDuration;
-(unsigned long long)lastSequenceNumber;
-(id)initWithAssetData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)firstSequenceNumber;
-(id)initWithAssetDuration:(SCD_Struct_HM4)arg1 creationDate:(id)arg2 firstSequenceNumber:(unsigned long long)arg3 lastSequenceNumber:(unsigned long long)arg4 ;
-(id)initWithAssetDuration:(SCD_Struct_HM4)arg1 creationDate:(id)arg2 firstSequenceNumber:(unsigned long long)arg3 lastSequenceNumber:(unsigned long long)arg4 nominalFrameRate:(double)arg5 dimensions:(CGSize)arg6 ;
-(id)initWithAssetDuration:(SCD_Struct_HM4)arg1 creationDate:(id)arg2 ;
@end

