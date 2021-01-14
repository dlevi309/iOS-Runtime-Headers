/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTKPhotoAnalysis, NSString, NSDate, NSURL;

@interface NTKPhoto : NSObject <NSCopying> {

	NTKPhotoAnalysis* _analyses[4];
	BOOL _isIris;
	NSString* _localIdentifier;
	NSDate* _modificationDate;
	NSURL* _imageURL;
	NSURL* _irisVideoURL;
	double _irisDuration;
	double _irisStillDisplayTime;
	CGRect _originalCrop;
	CGRect _crop;

}

@property (nonatomic,copy) NSString * localIdentifier;                                             //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                                              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) CGRect originalCrop;                                                  //@synthesize originalCrop=_originalCrop - In the implementation block
@property (nonatomic,readonly) NSString * uuidFromLocalIdentifierAndModificationDate; 
@property (nonatomic,copy) NSURL * imageURL;                                                       //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) CGRect crop;                                                          //@synthesize crop=_crop - In the implementation block
@property (assign,nonatomic) BOOL isIris;                                                          //@synthesize isIris=_isIris - In the implementation block
@property (nonatomic,copy) NSURL * irisVideoURL;                                                   //@synthesize irisVideoURL=_irisVideoURL - In the implementation block
@property (assign,nonatomic) double irisDuration;                                                  //@synthesize irisDuration=_irisDuration - In the implementation block
@property (assign,nonatomic) double irisStillDisplayTime;                                          //@synthesize irisStillDisplayTime=_irisStillDisplayTime - In the implementation block
@property (nonatomic,readonly) BOOL isMissingAnalysis; 
+(id)decodeFromDictionary:(id)arg1 forResourceDirectory:(id)arg2 ;
-(NSDate *)modificationDate;
-(CGRect)crop;
-(NSString *)localIdentifier;
-(void)setImageURL:(NSURL *)arg1 ;
-(double)irisStillDisplayTime;
-(BOOL)isIris;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(void)setCrop:(CGRect)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSURL *)imageURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginalCrop:(CGRect)arg1 ;
-(BOOL)isEqualToAsset:(id)arg1 ;
-(void)setIsIris:(BOOL)arg1 ;
-(void)setIrisVideoURL:(NSURL *)arg1 ;
-(void)setIrisDuration:(double)arg1 ;
-(void)setIrisStillDisplayTime:(double)arg1 ;
-(id)encodeAsDictionary;
-(BOOL)isEqualToPhoto:(id)arg1 ;
-(NSString *)uuidFromLocalIdentifierAndModificationDate;
-(BOOL)isMissingAnalysis;
-(id)analysisForAlignment:(unsigned long long)arg1 deviceSizeClass:(unsigned long long)arg2 ;
-(void)setAnalysis:(id)arg1 alignment:(unsigned long long)arg2 deviceSizeClass:(unsigned long long)arg3 ;
-(CGRect)originalCrop;
-(NSURL *)irisVideoURL;
-(double)irisDuration;
-(id)initWithLegacySidecar:(id)arg1 ;
@end

