/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {

	NSArray* _downloadKinds;
	BOOL _filterExternalOriginatedDownloads;
	NSString* _persistenceIdentifier;
	NSArray* _prefetchedDownloadExternalProperties;
	NSArray* _prefetchedDownloadProperties;
	BOOL _ignoreDivertedDownloads;

}

@property (nonatomic,copy) NSArray * prefetchedDownloadExternalProperties;              //@synthesize prefetchedDownloadExternalProperties=_prefetchedDownloadExternalProperties - In the implementation block
@property (assign,nonatomic) BOOL ignoreDivertedDownloads;                              //@synthesize ignoreDivertedDownloads=_ignoreDivertedDownloads - In the implementation block
@property (nonatomic,copy) NSArray * downloadKinds;                                     //@synthesize downloadKinds=_downloadKinds - In the implementation block
@property (nonatomic,copy) NSString * persistenceIdentifier;                            //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * prefetchedDownloadProperties;                      //@synthesize prefetchedDownloadProperties=_prefetchedDownloadProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterExternalOriginatedDownloads;              //@synthesize filterExternalOriginatedDownloads=_filterExternalOriginatedDownloads - In the implementation block
-(NSString *)persistenceIdentifier;
-(void)setPrefetchedDownloadProperties:(NSArray *)arg1 ;
-(NSArray *)prefetchedDownloadProperties;
-(void)setIgnoreDivertedDownloads:(BOOL)arg1 ;
-(void)setDownloadKinds:(NSArray *)arg1 ;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)ignoreDivertedDownloads;
-(BOOL)shouldFilterExternalOriginatedDownloads;
-(void)setShouldFilterExternalOriginatedDownloads:(BOOL)arg1 ;
-(NSArray *)prefetchedDownloadExternalProperties;
-(void)setPrefetchedDownloadExternalProperties:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)downloadKinds;
-(BOOL)isEqual:(id)arg1 ;
@end

