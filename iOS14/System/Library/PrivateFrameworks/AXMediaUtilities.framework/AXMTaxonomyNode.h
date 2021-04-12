/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedName:(NSString *)arg1 ;
-(double)confidence;
-(NSString *)localizedName;
-(void)setConfidence:(double)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

