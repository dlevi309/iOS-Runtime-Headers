/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
@end

