/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


#import <OSAnalyticsPrivate/OSAnalyticsPrivate-Structs.h>
@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface OSASubmissionPolicy : NSObject {

	NSArray* _default_template;
	NSArray* _primary_template;
	NSArray* _specific_files;
	NSString* _identifier;
	NSDictionary* _prefaces;
	NSMutableDictionary* _policies;
	NSMutableDictionary* _cadenceThrottleCache;
	NSMutableDictionary* _results;
	BOOL _permissive;
	BOOL _ignoreProxies;
	BOOL _usingCellular;
	BOOL _hasTasking;

}

@property (assign) BOOL permissive;                             //@synthesize permissive=_permissive - In the implementation block
@property (assign) BOOL ignoreProxies;                          //@synthesize ignoreProxies=_ignoreProxies - In the implementation block
@property (assign) BOOL usingCellular;                          //@synthesize usingCellular=_usingCellular - In the implementation block
@property (readonly) BOOL hasTasking;                           //@synthesize hasTasking=_hasTasking - In the implementation block
@property (readonly) NSDictionary * latestResults; 
+(SCD_Struct_OS0)guardingWindow;
-(id)init;
-(void)persist;
-(BOOL)pastDue;
-(NSDictionary *)latestResults;
-(BOOL)usingCellular;
-(id)_loadPreviousResults;
-(id)getCadence:(id)arg1 ;
-(BOOL)shouldConsiderCadence:(id)arg1 ;
-(double)secondsAgo:(id)arg1 ;
-(id)shouldSubmitRouting:(id)arg1 ;
-(id)initWithTemplate:(id)arg1 options:(id)arg2 ;
-(double)intervalForCadence:(id)arg1 ;
-(id)buildSubmissionTemplateForConfig:(id)arg1 ;
-(void)registerRouting:(id)arg1 result:(BOOL)arg2 ;
-(SCD_Struct_OS0)calcNextWindow;
-(BOOL)permissive;
-(void)setPermissive:(BOOL)arg1 ;
-(BOOL)ignoreProxies;
-(void)setIgnoreProxies:(BOOL)arg1 ;
-(void)setUsingCellular:(BOOL)arg1 ;
-(BOOL)hasTasking;
@end

