/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedInstanceWithError:(id*)arg1 ;
-(id)initWithError:(id*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2 ;
-(void)dealloc;
-(void)askThumbnailAdditionIndex:(/*^block*/id)arg1 ;
-(id)indexProxy;
-(void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2 ;
@end

