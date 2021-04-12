/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString, VUIDocumentContextData, VUIDocumentPreFetchedData, VUIDocumentUIConfiguration;

@interface VUIDocumentDataSource : NSObject {

	BOOL _shouldLoadPageImmediately;
	NSString* _documentRef;
	VUIDocumentContextData* _contextData;
	VUIDocumentPreFetchedData* _prefetchData;
	VUIDocumentUIConfiguration* _uiConfiguration;

}

@property (nonatomic,retain) NSString * documentRef;                                    //@synthesize documentRef=_documentRef - In the implementation block
@property (nonatomic,retain) VUIDocumentContextData * contextData;                      //@synthesize contextData=_contextData - In the implementation block
@property (nonatomic,retain) VUIDocumentPreFetchedData * prefetchData;                  //@synthesize prefetchData=_prefetchData - In the implementation block
@property (nonatomic,retain) VUIDocumentUIConfiguration * uiConfiguration;              //@synthesize uiConfiguration=_uiConfiguration - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadPageImmediately;                            //@synthesize shouldLoadPageImmediately=_shouldLoadPageImmediately - In the implementation block
+(id)documentDataSourceWithDictionary:(id)arg1 ;
-(void)setContextData:(VUIDocumentContextData *)arg1 ;
-(VUIDocumentContextData *)contextData;
-(id)jsonData;
-(NSString *)documentRef;
-(id)initWithDocumentRef:(id)arg1 ;
-(VUIDocumentUIConfiguration *)uiConfiguration;
-(id)initWithDataSourceDict:(id)arg1 ;
-(void)setDocumentRef:(NSString *)arg1 ;
-(VUIDocumentPreFetchedData *)prefetchData;
-(void)setPrefetchData:(VUIDocumentPreFetchedData *)arg1 ;
-(void)setUiConfiguration:(VUIDocumentUIConfiguration *)arg1 ;
-(BOOL)shouldLoadPageImmediately;
-(void)setShouldLoadPageImmediately:(BOOL)arg1 ;
@end

