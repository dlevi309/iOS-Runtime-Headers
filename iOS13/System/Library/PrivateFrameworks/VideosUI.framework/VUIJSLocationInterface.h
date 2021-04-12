/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSLocationInterface.h>

@protocol VUIJSLocationInterface <JSExport>
@required
-(id)authorizationStatus;
-(void)requestAuthorization;
-(void)shouldUpdateUserLocation;

@end


@interface VUIJSLocationInterface : IKJSObject <VUIJSLocationInterface>
-(void)dealloc;
-(id)authorizationStatus;
-(id)initWithAppContext:(id)arg1 ;
-(void)_authorizationStatusDidChange:(id)arg1 ;
-(void)_locationDidChange:(id)arg1 ;
-(void)requestAuthorization;
-(void)shouldUpdateUserLocation;
@end

