/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)productID;
-(void)setProductID:(NSString *)arg1 ;
-(id)jsonData;
-(BOOL)updateEvent;
-(BOOL)canAutoPlay;
-(NSString *)showID;
-(NSArray *)excludedCanonicals;
-(void)setShowID:(NSString *)arg1 ;
-(void)setExcludedCanonicals:(NSArray *)arg1 ;
-(void)setUpdateEvent:(BOOL)arg1 ;
-(void)setCanAutoPlay:(BOOL)arg1 ;
@end

