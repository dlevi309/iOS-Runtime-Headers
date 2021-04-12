/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject {

	WLKStoredConfiguration* _storedConfiguration;

}

@property (nonatomic,retain) WLKStoredConfiguration * storedConfiguration;              //@synthesize storedConfiguration=_storedConfiguration - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_updateConfiguration:(id)arg1 ;
-(void)_handleLibraryChange:(id)arg1 ;
-(void)_handleAccountChange:(id)arg1 ;
-(void)_setStoredConfiguration:(id)arg1 ;
-(void)_invalidateWithReason:(id)arg1 ;
-(WLKStoredConfiguration *)storedConfiguration;
-(void)setStoredConfiguration:(WLKStoredConfiguration *)arg1 ;
@end

