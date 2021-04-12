/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)shouldShowAlternateHeadlines;
-(NSString *)feldsparID;
-(id)initWithShouldShowAlternateHeadlines:(BOOL)arg1 ;
-(id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)metadataForDefaultHeadlineWithTitle:(id)arg1 ;
-(void)setShouldShowAlternateHeadlines:(BOOL)arg1 ;
@end

