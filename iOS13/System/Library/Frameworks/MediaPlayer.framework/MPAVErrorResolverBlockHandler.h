/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPAVErrorResolverDelegate.h>

@class MPAVErrorResolver, NSString;

@interface MPAVErrorResolverBlockHandler : NSObject <MPAVErrorResolverDelegate> {

	MPAVErrorResolverBlockHandler* _strongSelf;
	MPAVErrorResolver* _errorResolver;
	/*^block*/id _resolutionHandler;

}

@property (nonatomic,readonly) MPAVErrorResolver * errorResolver;              //@synthesize errorResolver=_errorResolver - In the implementation block
@property (nonatomic,copy) id resolutionHandler;                               //@synthesize resolutionHandler=_resolutionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3 ;
-(id)initWithErrorResolver:(id)arg1 ;
-(void)resolveError:(id)arg1 ;
-(MPAVErrorResolver *)errorResolver;
-(id)resolutionHandler;
-(void)setResolutionHandler:(id)arg1 ;
@end

