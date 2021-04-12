/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMBalloonApp.h>

@interface _IMBalloonBundleApp : IMBalloonApp {

	Class _bubbleClass;
	Class _browserClass;
	Class _dataSourceClass;

}
-(Class)bubbleClass;
-(Class)dataSourceClass;
-(Class)browserClass;
-(void)setDataSourceClass:(Class)arg1 ;
-(void)setBubbleClass:(Class)arg1 ;
-(void)setBrowserClass:(Class)arg1 ;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)_loadBundle;
-(void)_loadAppBundle;
@end

