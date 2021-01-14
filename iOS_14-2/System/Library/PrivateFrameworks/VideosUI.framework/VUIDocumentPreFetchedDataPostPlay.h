/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIDocumentPreFetchedData.h>

@class NSString, NSArray;

@interface VUIDocumentPreFetchedDataPostPlay : VUIDocumentPreFetchedData {

	BOOL _updateEvent;
	BOOL _canAutoPlay;
	NSString* _host;
	NSString* _productID;
	NSString* _showID;
	NSArray* _excludedCanonicals;

}

@property (nonatomic,copy) NSString * host;                           //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSString * productID;                      //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy) NSString * showID;                         //@synthesize showID=_showID - In the implementation block
@property (nonatomic,copy) NSArray * excludedCanonicals;              //@synthesize excludedCanonicals=_excludedCanonicals - In the implementation block
@property (assign,nonatomic) BOOL updateEvent;                        //@synthesize updateEvent=_updateEvent - In the implementation block
@property (assign,nonatomic) BOOL canAutoPlay;                        //@synthesize canAutoPlay=_canAutoPlay - In the implementation block
-(void)setHost:(NSString *)arg1 ;
-(NSString *)host;
-(id)jsonData;
-(NSString *)showID;
-(NSString *)productID;
-(void)setProductID:(NSString *)arg1 ;
-(BOOL)updateEvent;
-(BOOL)canAutoPlay;
-(NSArray *)excludedCanonicals;
-(void)setShowID:(NSString *)arg1 ;
-(void)setExcludedCanonicals:(NSArray *)arg1 ;
-(void)setUpdateEvent:(BOOL)arg1 ;
-(void)setCanAutoPlay:(BOOL)arg1 ;
@end

