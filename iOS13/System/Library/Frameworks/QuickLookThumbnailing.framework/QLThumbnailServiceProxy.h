/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/


@protocol QLThumbnailsInterface, QLThumbnailAdditionIndexInterface;
@class NSXPCConnection, NSObject;

@interface QLThumbnailServiceProxy : NSObject {

	NSXPCConnection* _connection;
	NSObject*<QLThumbnailsInterface> _proxy;
	NSObject*<QLThumbnailAdditionIndexInterface> _indexProxy;

}
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2 ;
-(void)askThumbnailAdditionIndex:(/*^block*/id)arg1 ;
-(id)indexProxy;
-(void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2 ;
@end

