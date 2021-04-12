/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
@class _MKUserLocationView, NSObject, CNContactStore, CNMonogrammer;

@interface _MKUserLocationViewImageProvider : NSObject {

	_MKUserLocationView* _view;
	NSObject*<OS_dispatch_queue> _queue;
	CNContactStore* _contactStore;
	CNMonogrammer* _monogrammer;

}
-(id)init;
-(void)_contactsChanged:(id)arg1 ;
-(void)_updateImage;
-(id)initWithUserLocationView:(id)arg1 ;
-(void)_updateContactImage;
-(id)_monogrammer;
-(void)_updateDefaultImage;
@end

