/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@protocol OS_dispatch_semaphore;
@class MPMediaLibrary, NSObject, _MPMediaLibraryEntityChange, NSString;

@interface MPAssistantSyncHandler : NSObject <AFSyncHandler> {

	MPMediaLibrary* _library;
	NSObject*<OS_dispatch_semaphore> _changeEnumerationSemaphore;
	NSObject*<OS_dispatch_semaphore> _resultProcessingSemaphore;
	_MPMediaLibraryEntityChange* _nextChange;
	BOOL _deleteNextChange;
	BOOL _resetSync;
	BOOL _abortSync;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_widthLimitedOperationQueue;
-(id)init;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
@end

