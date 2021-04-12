/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSSiteMetadataImageCacheSettingsEntry.h>

@class NSString, NSDate, UIColor;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry> {

	BOOL _lastRequestWasInUserLoadedWebpage;
	BOOL _iconInCache;
	BOOL _requestDidSucceed;
	BOOL _higherPriorityIconDownloadFailedDueToNetworkError;
	long long _databaseID;
	NSString* _host;
	NSString* _UUIDString;
	NSDate* _lastRequestDate;
	long long _requestCount;
	UIColor* _extractedColor;
	long long _transparencyAnalysisResult;

}

@property (nonatomic,copy) NSString * host;                                                       //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSString * UUIDString;                                                 //@synthesize UUIDString=_UUIDString - In the implementation block
@property (nonatomic,retain) NSDate * lastRequestDate;                                            //@synthesize lastRequestDate=_lastRequestDate - In the implementation block
@property (assign,nonatomic) BOOL lastRequestWasInUserLoadedWebpage;                              //@synthesize lastRequestWasInUserLoadedWebpage=_lastRequestWasInUserLoadedWebpage - In the implementation block
@property (assign,nonatomic) long long requestCount;                                              //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,getter=isIconInCache,nonatomic) BOOL iconInCache;                               //@synthesize iconInCache=_iconInCache - In the implementation block
@property (assign,nonatomic) BOOL requestDidSucceed;                                              //@synthesize requestDidSucceed=_requestDidSucceed - In the implementation block
@property (nonatomic,retain) UIColor * extractedColor;                                            //@synthesize extractedColor=_extractedColor - In the implementation block
@property (assign,nonatomic) long long transparencyAnalysisResult;                                //@synthesize transparencyAnalysisResult=_transparencyAnalysisResult - In the implementation block
@property (assign,nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;              //@synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadStatusFlags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long databaseID;                                                //@synthesize databaseID=_databaseID - In the implementation block
+(id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9 UUIDString:(id)arg10 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)UUIDString;
-(id)initWithHost:(id)arg1 ;
-(long long)requestCount;
-(void)setUUIDString:(NSString *)arg1 ;
-(long long)databaseID;
-(void)setDatabaseID:(long long)arg1 ;
-(void)setRequestCount:(long long)arg1 ;
-(id)initWithSQLiteRow:(id)arg1 ;
-(void)setLastRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastRequestDate;
-(BOOL)isIconInCache;
-(BOOL)requestDidSucceed;
-(BOOL)higherPriorityIconDownloadFailedDueToNetworkError;
-(BOOL)lastRequestWasInUserLoadedWebpage;
-(void)setLastRequestWasInUserLoadedWebpage:(BOOL)arg1 ;
-(void)setIconInCache:(BOOL)arg1 ;
-(void)setRequestDidSucceed:(BOOL)arg1 ;
-(void)setHigherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg1 ;
-(id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9 UUIDString:(id)arg10 ;
-(UIColor *)extractedColor;
-(unsigned long long)downloadStatusFlags;
-(long long)transparencyAnalysisResult;
-(void)setExtractedColor:(UIColor *)arg1 ;
-(void)setTransparencyAnalysisResult:(long long)arg1 ;
@end

