/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitOptionsValidator : NSObject {

	NSCloudKitMirroringDelegateOptions* _parsedOptions;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * parsedOptions;              //@synthesize parsedOptions=_parsedOptions - In the implementation block
-(void)dealloc;
-(BOOL)_validateContainerIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateHistoryTrackingOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateContainerOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateAssetThreshold:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateMemoryThreshold:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateOptions:(id)arg1 andStoreOptions:(id)arg2 error:(id*)arg3 ;
-(NSCloudKitMirroringDelegateOptions *)parsedOptions;
@end

