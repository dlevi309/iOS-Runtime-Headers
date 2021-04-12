/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitOptionsValidator : NSObject {

	NSCloudKitMirroringDelegateOptions* _parsedOptions;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * parsedOptions;              //@synthesize parsedOptions=_parsedOptions - In the implementation block
-(BOOL)_validateContainerOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateAssetThreshold:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateHistoryTrackingOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateOptions:(id)arg1 andStoreOptions:(id)arg2 error:(id*)arg3 ;
-(NSCloudKitMirroringDelegateOptions *)parsedOptions;
-(BOOL)_validateMemoryThreshold:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateContainerIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

