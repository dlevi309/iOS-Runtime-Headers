/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSDictionary * primaryTerms; 
@property (nonatomic,readonly) NSArray * baseTerms; 
@property (nonatomic,readonly) NSArray * metricsKitTerms; 
@property (nonatomic,readonly) NSArray * filteredTerms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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

