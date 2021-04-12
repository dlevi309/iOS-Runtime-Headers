/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/


@class NSLock, NSMapTable;

@interface _MFMessageContentURLProtocolRegistry : NSObject {

	NSLock* _lock;
	NSMapTable* _storage;

}

@property (nonatomic,readonly) NSMapTable * storage;              //@synthesize storage=_storage - In the implementation block
+(id)sharedRegistry;
-(id)init;
-(NSMapTable *)storage;
-(id)URLForLoadingContext:(id)arg1 scheme:(id)arg2 ;
-(id)loadingContextForURL:(id)arg1 ;
@end

