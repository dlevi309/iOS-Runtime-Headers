/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVMetadataItem.h>

@class AVLazyValueLoadingMetadataItemInternal;

@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {

	AVLazyValueLoadingMetadataItemInternal* _lazyMetadataItem;

}
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)value;
-(id)dataType;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(long long)_valueStatus;
-(void)_waitForLoadingOfValueDependentKey:(id)arg1 ;
-(void)_valueRequestDidFinish;
@end

