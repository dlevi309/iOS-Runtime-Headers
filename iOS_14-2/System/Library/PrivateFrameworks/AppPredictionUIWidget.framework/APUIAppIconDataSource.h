/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

#import <AppPredictionUIWidget/AppPredictionUIWidget-Structs.h>
#import <libobjc.A.dylib/SBLeafIconDataSource.h>

@protocol APUIAppIconDataSourceDelegate;
@class NSString;

@interface APUIAppIconDataSource : NSObject <SBLeafIconDataSource> {

	id<APUIAppIconDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<APUIAppIconDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)iconForBundleIdentifier:(id)arg1 shouldApplyMask:(BOOL)arg2 ;
+(void)openApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_appClipIconTreatmentForCGImage:(CGImageRef)arg1 ;
+(id)_appClipIconForIdentifier:(id)arg1 ;
-(id)icon:(id)arg1 unmaskedImageWithInfo:(SBIconImageInfo)arg2 ;
-(id<APUIAppIconDataSourceDelegate>)delegate;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(void)setDelegate:(id<APUIAppIconDataSourceDelegate>)arg1 ;
@end

