/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSMetricsInterface.h>

@protocol VUIJSMetricsInterface <JSExport>
@required
-(void)recordEvent:(id)arg1;
-(void)recordPerfEvent:(id)arg1;
-(void)recordLogEvent:(id)arg1;

@end


@interface VUIJSMetricsInterface : IKJSObject <VUIJSMetricsInterface>
-(void)recordEvent:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)recordPerfEvent:(id)arg1 ;
-(void)recordLogEvent:(id)arg1 ;
@end

