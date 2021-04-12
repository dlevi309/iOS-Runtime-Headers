/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class NSString;

@interface MDLPathAssetResolver : NSObject <MDLAssetResolver> {

	NSString* _path;

}

@property (nonatomic,copy) NSString * path; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
@end

