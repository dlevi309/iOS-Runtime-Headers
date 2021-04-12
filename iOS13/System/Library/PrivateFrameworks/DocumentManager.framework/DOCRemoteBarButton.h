/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIBarButtonItem, NSUUID;

@interface DOCRemoteBarButton : NSObject <NSSecureCoding> {

	UIBarButtonItem* _barButton;
	NSUUID* _uuid;

}

@property (readonly) UIBarButtonItem * barButton;              //@synthesize barButton=_barButton - In the implementation block
@property (readonly) NSUUID * uuid;                            //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(id)initWithBarButton:(id)arg1 ;
-(UIBarButtonItem *)barButton;
@end

