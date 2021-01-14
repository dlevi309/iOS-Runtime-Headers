/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
*/

#import <VisualLocalization/VisualLocalization-Structs.h>
#import <libobjc.A.dylib/VLLocalizationDataProvider.h>

@protocol VLLocalizationDataProviderDelegate;
@class NSURL, NSString;

@interface VLFilesystemDataProvider : NSObject <VLLocalizationDataProvider> {

	NSURL* _baseDirectory;
	id<VLLocalizationDataProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VLLocalizationDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VLLocalizationDataProviderDelegate>)delegate;
-(void)setDelegate:(id<VLLocalizationDataProviderDelegate>)arg1 ;
-(id)initWithBaseDirectory:(id)arg1 ;
-(id)fileURLForKey:(const SCD_Struct_VL8*)arg1 error:(id*)arg2 ;
-(void)determineAvailabilityForCoordinate:(const SCD_Struct_VL6*)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

