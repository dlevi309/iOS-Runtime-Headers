/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
@end

