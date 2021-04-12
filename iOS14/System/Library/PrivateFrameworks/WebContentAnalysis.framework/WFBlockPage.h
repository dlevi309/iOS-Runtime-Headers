/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class NSURL, NSString;

@interface WFBlockPage : NSObject {

	NSURL* pageTemplateURL;
	NSString* userVisibleURLString;
	NSString* formActionURLString;
	NSString* preferredLanguage;

}

@property (readonly) NSURL * pageTemplateURL; 
@property (retain) NSString * userVisibleURLString; 
@property (retain) NSString * formActionURLString; 
-(id)_css;
-(id)page;
-(NSString *)userVisibleURLString;
-(NSURL *)pageTemplateURL;
-(void)dealloc;
-(void)setUserVisibleURLString:(NSString *)arg1 ;
-(id)_initWithUsername:(id)arg1 fileName:(id)arg2 ;
-(id)_fileContentWithName:(id)arg1 extension:(id)arg2 ;
-(id)_blockpage;
-(id)initNoOveridePageWithUsername:(id)arg1 ;
-(id)initWithUsername:(id)arg1 overridesAllowded:(BOOL)arg2 ;
-(NSString *)formActionURLString;
-(void)setFormActionURLString:(NSString *)arg1 ;
@end

