/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIHomeShareMediaLibraryManager.h>

@protocol VUIHomeShareMediaLibraryManagerDelegate, OS_dispatch_queue;
@class NSArray, VUIMediaLibraryManager, NSMutableArray, NSObject, NSString;

@interface VUIMPHomeShareMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManager> {

	id<VUIHomeShareMediaLibraryManagerDelegate> _delegate;
	VUIMediaLibraryManager* _manager;
	NSMutableArray* _mutableHomeShareMediaLibraries;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;

}

@property (assign,nonatomic,__weak) VUIMediaLibraryManager * manager;                                  //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableHomeShareMediaLibraries;                          //@synthesize mutableHomeShareMediaLibraries=_mutableHomeShareMediaLibraries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;               //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VUIHomeShareMediaLibraryManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * homeShareMediaLibraries; 
+(id)_sharedMPMediaLibraries;
-(void)dealloc;
-(id<VUIHomeShareMediaLibraryManagerDelegate>)delegate;
-(void)setDelegate:(id<VUIHomeShareMediaLibraryManagerDelegate>)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(VUIMediaLibraryManager *)manager;
-(void)setManager:(VUIMediaLibraryManager *)arg1 ;
-(void)beginDiscoveringMediaLibraries;
-(void)endDiscoveringMediaLibraries;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(NSArray *)homeShareMediaLibraries;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_homeShareMediaLibraries;
-(void)_handleAvailableMediaLibrariesDidChange:(id)arg1 ;
-(NSMutableArray *)mutableHomeShareMediaLibraries;
-(void)_updateMediaLibrariesWithSharedMPMediaLibraries:(id)arg1 ;
-(void)_notifyDelegateHomeShareMediaLibrariesDidUpdate:(id)arg1 withChangeSet:(id)arg2 ;
-(void)setMutableHomeShareMediaLibraries:(NSMutableArray *)arg1 ;
@end

