/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

