/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {

	NSString* _localizedName;
	LSApplicationProxy* _proxy;

}

@property (nonatomic,readonly) LSApplicationProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(id)description;
-(void)load;
-(id)localizedName;
-(LSApplicationProxy *)proxy;
-(id)initWithApplicationProxy:(id)arg1 ;
@end

