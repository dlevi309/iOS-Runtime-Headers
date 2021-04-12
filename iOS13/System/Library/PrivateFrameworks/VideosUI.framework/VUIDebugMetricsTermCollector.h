/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIDebugMetricsTermCollector.h>
@class NSDictionary, NSArray;


@protocol VUIDebugMetricsTermCollector <NSObject>
@property (nonatomic,readonly) NSDictionary * primaryTerms; 
@property (nonatomic,readonly) NSArray * baseTerms; 
@property (nonatomic,readonly) NSArray * metricsKitTerms; 
@property (nonatomic,readonly) NSArray * filteredTerms; 
@required
-(NSDictionary *)primaryTerms;
-(NSArray *)baseTerms;
-(NSArray *)metricsKitTerms;
-(NSArray *)filteredTerms;

@end


@class NSDictionary, NSArray, NSString;

@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * primaryTerms; 
@property (nonatomic,readonly) NSArray * baseTerms; 
@property (nonatomic,readonly) NSArray * metricsKitTerms; 
@property (nonatomic,readonly) NSArray * filteredTerms; 
-(id)searchTerms;
-(id)pageTerms;
-(id)clickTerms;
-(id)impressionsTerms;
-(id)enterTerms;
-(id)exitTerms;
-(id)accountTerms;
-(id)pageRenderTerms;
-(NSDictionary *)primaryTerms;
-(NSArray *)baseTerms;
-(NSArray *)metricsKitTerms;
-(NSArray *)filteredTerms;
-(id)dialogTerms;
@end

