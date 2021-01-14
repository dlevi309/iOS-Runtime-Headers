/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@protocol ATLDecoder
@required
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5;

@end

