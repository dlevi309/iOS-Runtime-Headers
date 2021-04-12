/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {

	NSString* _localizedName;
	LSApplicationProxy* _proxy;

}

@property (nonatomic,readonly) LSApplicationProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(void)load;
-(id)localizedName;
-(id)initWithApplicationProxy:(id)arg1 ;
-(LSApplicationProxy *)proxy;
-(id)description;
@end

