/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSString, NSSet;

@interface CAMCaptureCoordinationInfo : NSObject {

	NSString* _identifier;
	NSSet* _allExpectedResultSpecifiers;
	unsigned long long _resultSpecifiers;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSSet * allExpectedResultSpecifiers;                                                          //@synthesize allExpectedResultSpecifiers=_allExpectedResultSpecifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long resultSpecifiers;                                                          //@synthesize resultSpecifiers=_resultSpecifiers - In the implementation block
@property (getter=isHDR,nonatomic,readonly) BOOL HDR; 
@property (getter=isFiltered,nonatomic,readonly) BOOL filtered; 
@property (getter=isOverCapture,nonatomic,readonly) BOOL overCapture; 
@property (getter=isUnfilteredImageForFilteredPair,nonatomic,readonly) BOOL unfilteredImageForFilteredPair; 
@property (getter=isFilteredImageForFilteredPair,nonatomic,readonly) BOOL filteredImageForFilteredPair; 
@property (getter=isEV0ForHDREV0Pair,nonatomic,readonly) BOOL EV0ForHDREV0Pair; 
@property (getter=isHDRForHDREV0Pair,nonatomic,readonly) BOOL HDRForHDREV0Pair; 
@property (getter=isPrimaryAssetForOverCapturePair,nonatomic,readonly) BOOL primaryAssetForOverCapturePair; 
@property (getter=isSecondaryAssetForOverCapturePair,nonatomic,readonly) BOOL secondaryAssetForOverCapturePair; 
@property (getter=isFinalExpectedStillImageResult,nonatomic,readonly) BOOL finalExpectedStillImageResult; 
@property (getter=isFinalExpectedVideoResult,nonatomic,readonly) BOOL finalExpectedVideoResult; 
@property (nonatomic,readonly) BOOL representsFinalProcessedStillImage; 
@property (nonatomic,readonly) BOOL representsFinalProcessedVideo; 
-(id)description;
-(NSString *)identifier;
-(BOOL)isFiltered;
-(BOOL)isHDR;
-(unsigned long long)resultSpecifiers;
-(NSSet *)allExpectedResultSpecifiers;
-(BOOL)isEV0ForHDREV0Pair;
-(BOOL)isUnfilteredImageForFilteredPair;
-(BOOL)isPrimaryAssetForOverCapturePair;
-(BOOL)isSecondaryAssetForOverCapturePair;
-(id)initWithIdentifier:(id)arg1 allExpectedResultSpecifiers:(id)arg2 resultSpecifiers:(unsigned long long)arg3 ;
-(BOOL)isOverCapture;
-(BOOL)isFilteredImageForFilteredPair;
-(BOOL)isHDRForHDREV0Pair;
-(BOOL)isFinalExpectedStillImageResult;
-(BOOL)isFinalExpectedVideoResult;
-(BOOL)representsFinalProcessedStillImage;
-(BOOL)representsFinalProcessedVideo;
@end

