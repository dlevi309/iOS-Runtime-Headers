/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject {

	WLKStoredConfiguration* _storedConfiguration;

}

@property (nonatomic,retain) WLKStoredConfiguration * storedConfiguration;              //@synthesize storedConfiguration=_storedConfiguration - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_updateConfiguration:(id)arg1 ;
-(void)dealloc;
-(WLKStoredConfiguration *)storedConfiguration;
-(void)_handleLibraryChange:(id)arg1 ;
-(void)_handleAccountChange:(id)arg1 ;
-(void)_setStoredConfiguration:(id)arg1 ;
-(void)_invalidateWithReason:(id)arg1 ;
-(void)setStoredConfiguration:(WLKStoredConfiguration *)arg1 ;
@end

