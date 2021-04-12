/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <UIKitCore/UIBarButtonItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface DOCRemoteUIBarButtonItem : UIBarButtonItem <NSCopying> {

	NSUUID* _uuid;

}

@property (retain) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

