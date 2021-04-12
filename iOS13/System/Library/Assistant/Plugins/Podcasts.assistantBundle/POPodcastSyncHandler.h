/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@class NSMutableDictionary, NSString;

@interface POPodcastSyncHandler : NSObject <AFSyncHandler> {

	NSMutableDictionary* _anchorToRevision;

}

@property (nonatomic,retain) NSMutableDictionary * anchorToRevision;              //@synthesize anchorToRevision=_anchorToRevision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)validity;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(void)setAnchorToRevision:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)anchorToRevision;
@end

