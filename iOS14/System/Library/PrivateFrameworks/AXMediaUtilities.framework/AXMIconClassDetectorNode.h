/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMMobileAssetEvaluationNode.h>

@class iconclassification__generated__;

@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode

@property (nonatomic,readonly) iconclassification__generated__ * mlModel; 
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(id)modelResourceNames;
-(id)mlModelClasses;
-(id)mobileAssetType;
-(unsigned long long)minSupportedFormatVersion;
-(unsigned long long)maxSupportedFormatVersion;
-(id)_localizedClassForClass:(id)arg1 ;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
@end

