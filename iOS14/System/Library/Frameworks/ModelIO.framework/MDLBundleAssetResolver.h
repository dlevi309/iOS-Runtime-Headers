/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class NSBundle, NSString;

@interface MDLBundleAssetResolver : NSObject <MDLAssetResolver> {

	NSBundle* _bundle;
	NSString* _path;

}

@property (nonatomic,copy) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBundle:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
@end

