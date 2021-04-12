/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData {

	NSString* _showID;
	NSString* _episodeID;

}

@property (nonatomic,copy,readonly) NSString * showID;                 //@synthesize showID=_showID - In the implementation block
@property (nonatomic,copy,readonly) NSString * episodeID;              //@synthesize episodeID=_episodeID - In the implementation block
-(id)jsonData;
-(NSString *)showID;
-(id)initWithShowID:(id)arg1 episodeID:(id)arg2 ;
-(NSString *)episodeID;
@end

