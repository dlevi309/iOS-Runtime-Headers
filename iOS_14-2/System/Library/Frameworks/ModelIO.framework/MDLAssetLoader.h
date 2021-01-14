/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MDLAssetLoader : NSObject <NSSecureCoding> {

	NSString* _extension;
	AssetData* _buffer;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)loadURL:(id)arg1 ;
-(void)loadMDLAsset:(id)arg1 preserveTopology:(BOOL)arg2 ;
@end

