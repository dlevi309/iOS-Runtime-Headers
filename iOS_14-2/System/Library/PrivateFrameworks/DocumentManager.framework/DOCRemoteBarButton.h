/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)uuid;
-(UIBarButtonItem *)barButton;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBarButton:(id)arg1 ;
@end

