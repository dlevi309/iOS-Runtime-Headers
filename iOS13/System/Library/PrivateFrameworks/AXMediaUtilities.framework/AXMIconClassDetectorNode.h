/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class iconclassification__generated__, NSURL;

@interface AXMIconClassDetectorNode : AXMEvaluationNode {

	iconclassification__generated__* _mlModel;
	NSURL* _modelURL;

}
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)evaluate:(id)arg1 ;
-(void)_downloadAssetIfNecessary;
-(id)_localizedClassForClass:(id)arg1 ;
@end

