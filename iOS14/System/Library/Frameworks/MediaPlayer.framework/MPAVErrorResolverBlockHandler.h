/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)resolveError:(id)arg1 ;
-(void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3 ;
-(id)initWithErrorResolver:(id)arg1 ;
-(MPAVErrorResolver *)errorResolver;
-(id)resolutionHandler;
-(void)setResolutionHandler:(id)arg1 ;
@end

