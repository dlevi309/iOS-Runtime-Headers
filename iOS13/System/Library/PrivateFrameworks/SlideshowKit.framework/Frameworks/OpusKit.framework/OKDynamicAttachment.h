/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString, UIAttachmentBehavior;

@interface OKDynamicAttachment : NSObject <OKSettingsSupport> {

	UIOffset _localOffsetFromCenter;
	NSString* _remoteWidgetName;
	SCD_Union_OK10 _remote;
	double _length;
	double _damping;
	double _frequency;
	struct {
		unsigned needsUpdate : 1;
		unsigned hasLength : 1;
		unsigned hasDamping : 1;
		unsigned hasFrequency : 1;
	}  _flags;
	UIAttachmentBehavior* _behavior;

}

@property (readonly) UIAttachmentBehavior * behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(UIAttachmentBehavior *)behavior;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)updateForOwningDynamicProxy:(id)arg1 ;
@end

