/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxMetaPlug.h>

@protocol FxMetaPlug
@required
-(id)version;
-(id)uuid;
-(id)displayName;
-(id)groupUUID;
-(id)groupDisplayName;
-(id)fxPlugProperties;
-(id)versionDisplayName;

@end


@interface FxMetaPlug : NSObject <FxMetaPlug> {

	FxMetaPlugPriv* _priv;

}
+(id)syntheticUUIDBasedOnString:(id)arg1 ;
+(id)fxMetaPlugWithWrapper:(id)arg1 andData:(id)arg2 ;
+(id)syntheticUUIDBasedOnIndex:(int)arg1 ;
-(void)dealloc;
-(id)data;
-(id)version;
-(id)uuid;
-(id)displayName;
-(id)groupUUID;
-(id)wrapper;
-(id)groupDisplayName;
-(id)fxPlugProperties;
-(id)initWithWrapper:(id)arg1 andData:(id)arg2 ;
-(id)versionDisplayName;
-(id)fxPlugDescriptor;
@end

