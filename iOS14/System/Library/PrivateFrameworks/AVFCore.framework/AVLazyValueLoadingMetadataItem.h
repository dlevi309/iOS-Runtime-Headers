/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVMetadataItem.h>

@class AVLazyValueLoadingMetadataItemInternal;

@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {

	AVLazyValueLoadingMetadataItemInternal* _lazyMetadataItem;

}
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(id)dataType;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(long long)_valueStatus;
-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(void)_waitForLoadingOfValueDependentKey:(id)arg1 ;
-(void)_valueRequestDidFinish;
-(id)value;
-(void)dealloc;
@end

