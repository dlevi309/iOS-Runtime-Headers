/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, LSApplicationProxy, UIImage, LSApplicationWorkspace;

@interface CKAppInstallation : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	LSApplicationProxy* _proxy;
	UIImage* _icon;
	double _percentComplete;
	unsigned long long _installState;
	double _startTime;
	LSApplicationWorkspace* __applicationWorkspace;

}

@property (nonatomic,retain) LSApplicationProxy * proxy; 
@property (assign,nonatomic) double percentComplete;                                        //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) unsigned long long installState;                               //@synthesize installState=_installState - In the implementation block
@property (assign,nonatomic) double startTime;                                              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) LSApplicationWorkspace * _applicationWorkspace;              //@synthesize _applicationWorkspace=__applicationWorkspace - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * pluginBundleIdentifier; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) BOOL installed; 
-(void)setProxy:(LSApplicationProxy *)arg1 ;
-(unsigned long long)installState;
-(void)setInstallState:(unsigned long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(LSApplicationProxy *)proxy;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(UIImage *)icon;
-(NSString *)bundleIdentifier;
-(BOOL)installed;
-(id)description;
-(NSString *)localizedDisplayName;
-(void)setPercentComplete:(double)arg1 ;
-(double)percentComplete;
-(LSApplicationWorkspace *)_applicationWorkspace;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(id)initWithBundleIdentifier:(id)arg1 startTime:(double)arg2 ;
-(NSString *)pluginBundleIdentifier;
@end

