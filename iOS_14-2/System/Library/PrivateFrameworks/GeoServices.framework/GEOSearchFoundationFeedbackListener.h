/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@class NSArray, NSString;

@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {

	int _uiTarget;
	NSArray* _sections;
	NSArray* _resultCardSections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedbackListenerForParsec;
-(id)traits;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(id)init;
-(void)didRankSections:(id)arg1 ;
-(void)didEngageSection:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(id)initWithClientType:(unsigned long long)arg1 ;
-(void)didEngageResult:(id)arg1 ;
@end

