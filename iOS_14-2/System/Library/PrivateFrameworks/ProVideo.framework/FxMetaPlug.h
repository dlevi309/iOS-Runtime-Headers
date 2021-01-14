/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxMetaPlug.h>

@protocol FxMetaPlug
@required
-(id)uuid;
-(id)version;
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
-(id)uuid;
-(id)data;
-(id)wrapper;
-(id)version;
-(id)displayName;
-(id)groupUUID;
-(void)dealloc;
-(id)groupDisplayName;
-(id)fxPlugProperties;
-(id)initWithWrapper:(id)arg1 andData:(id)arg2 ;
-(id)versionDisplayName;
-(id)fxPlugDescriptor;
@end

