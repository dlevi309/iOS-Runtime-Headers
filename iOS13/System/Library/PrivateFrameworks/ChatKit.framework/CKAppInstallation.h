/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setInstallState:(unsigned long long)arg1 ;
-(unsigned long long)installState;
-(void)setProxy:(LSApplicationProxy *)arg1 ;
-(LSApplicationProxy *)proxy;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)percentComplete;
-(UIImage *)icon;
-(void)setPercentComplete:(double)arg1 ;
-(NSString *)localizedDisplayName;
-(LSApplicationWorkspace *)_applicationWorkspace;
-(BOOL)installed;
-(id)initWithBundleIdentifier:(id)arg1 startTime:(double)arg2 ;
-(NSString *)pluginBundleIdentifier;
@end

