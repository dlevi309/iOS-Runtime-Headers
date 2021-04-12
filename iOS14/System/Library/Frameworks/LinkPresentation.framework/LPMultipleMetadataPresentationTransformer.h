/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSArray, NSDictionary;

@interface LPMultipleMetadataPresentationTransformer : NSObject {

	NSArray* _metadata;
	NSDictionary* _summaryCounts;
	BOOL _hasOnlyFiles;
	unsigned long long _preferredSizeClass;

}

@property (assign,nonatomic) unsigned long long preferredSizeClass;              //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
-(id)summaryMetadata;
-(id)initWithMetadata:(id)arg1 ;
-(id)summary;
-(void)setPreferredSizeClass:(unsigned long long)arg1 ;
-(id)_summaryCounts;
-(id)_summarySubtitle;
-(id)summaryImages;
-(unsigned long long)preferredSizeClass;
@end

