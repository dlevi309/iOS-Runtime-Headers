/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <FileProvider/FPOperation.h>
#import <libobjc.A.dylib/FPOperationClient.h>

@class NSMutableArray, NSArray, NSProgress;

@interface FPDFetchAppLibraryIconOperation : FPOperation <FPOperationClient> {

	CGSize _desiredSize;
	double _screenScale;
	NSMutableArray* _appBundleIDsNotFound;
	BOOL _allowLocalLookup;
	BOOL _allowAppStoreLookup;
	NSArray* _appBundleIDs;
	NSProgress* _progress;
	/*^block*/id _perAppBundleCompletion;

}

@property (assign,nonatomic) BOOL allowLocalLookup;                 //@synthesize allowLocalLookup=_allowLocalLookup - In the implementation block
@property (assign,nonatomic) BOOL allowAppStoreLookup;              //@synthesize allowAppStoreLookup=_allowAppStoreLookup - In the implementation block
@property (nonatomic,readonly) NSArray * appBundleIDs;              //@synthesize appBundleIDs=_appBundleIDs - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id perAppBundleCompletion;               //@synthesize perAppBundleCompletion=_perAppBundleCompletion - In the implementation block
+(id)sharedOperationQueue;
-(void)main;
-(NSProgress *)progress;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAppBundleIDs:(id)arg1 desiredSize:(CGSize)arg2 screenScale:(double)arg3 ;
-(void)setPerAppBundleCompletion:(id)arg1 ;
-(void)_perAppBundleCompletion:(id)arg1 iconData:(id)arg2 contentType:(id)arg3 error:(id)arg4 ;
-(void)_verifyAppBundleIDsFormat;
-(void)_retrieveIconsFromLocalDevice;
-(void)_retrieveIconsFromAppStore;
-(BOOL)_checkTypeIsValid:(id)arg1 ;
-(BOOL)_checkIsNotPrefixedByTeamID:(id)arg1 ;
-(id)perAppBundleCompletion;
-(NSArray *)appBundleIDs;
-(BOOL)allowLocalLookup;
-(void)setAllowLocalLookup:(BOOL)arg1 ;
-(BOOL)allowAppStoreLookup;
-(void)setAllowAppStoreLookup:(BOOL)arg1 ;
@end

