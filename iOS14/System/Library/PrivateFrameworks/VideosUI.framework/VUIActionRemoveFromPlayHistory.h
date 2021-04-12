/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionRemoveFromPlayHistory : VUIAction {

	BOOL _isContinueWatching;
	NSString* _deleteID;
	NSString* _canonicalID;

}

@property (nonatomic,retain) NSString * deleteID;                  //@synthesize deleteID=_deleteID - In the implementation block
@property (nonatomic,retain) NSString * canonicalID;               //@synthesize canonicalID=_canonicalID - In the implementation block
@property (assign,nonatomic) BOOL isContinueWatching;              //@synthesize isContinueWatching=_isContinueWatching - In the implementation block
-(NSString *)canonicalID;
-(NSString *)deleteID;
-(void)setCanonicalID:(NSString *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 isContinueWatching:(BOOL)arg2 ;
-(void)setDeleteID:(NSString *)arg1 ;
-(BOOL)isContinueWatching;
-(void)setIsContinueWatching:(BOOL)arg1 ;
@end

