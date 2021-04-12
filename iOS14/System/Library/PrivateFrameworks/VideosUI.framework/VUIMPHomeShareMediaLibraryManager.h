/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<VUIHomeShareMediaLibraryManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * homeShareMediaLibraries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedMPMediaLibraries;
-(id)initWithManager:(id)arg1 ;
-(id<VUIHomeShareMediaLibraryManagerDelegate>)delegate;
-(void)setManager:(VUIMediaLibraryManager *)arg1 ;
-(void)beginDiscoveringMediaLibraries;
-(void)endDiscoveringMediaLibraries;
-(void)setDelegate:(id<VUIHomeShareMediaLibraryManagerDelegate>)arg1 ;
-(VUIMediaLibraryManager *)manager;
-(void)dealloc;
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

