/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject {

	BOOL _shouldShowAlternateHeadlines;
	NSString* _feldsparID;

}

@property (nonatomic,copy,readonly) NSString * feldsparID;                   //@synthesize feldsparID=_feldsparID - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAlternateHeadlines;              //@synthesize shouldShowAlternateHeadlines=_shouldShowAlternateHeadlines - In the implementation block
+(BOOL)isDebugModeEnabled;
-(id)initWithShouldShowAlternateHeadlines:(BOOL)arg1 ;
-(id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(void)setShouldShowAlternateHeadlines:(BOOL)arg1 ;
-(id)metadataForDefaultHeadlineWithTitle:(id)arg1 ;
-(NSString *)feldsparID;
-(BOOL)shouldShowAlternateHeadlines;
-(id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
@end

