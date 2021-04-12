/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class NSString;

@interface AXMTaxonomyNode : NSObject {

	NSString* _label;
	NSString* _localizedName;
	double _confidence;

}

@property (nonatomic,retain) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
-(NSString *)localizedName;
-(double)confidence;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setConfidence:(double)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
@end

