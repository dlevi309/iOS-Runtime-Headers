/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDescribing.h>

@class NSString, CADisplay, BKSDisplayProgressIndicatorProperties;

@interface BKSDisplayRenderOverlayDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, BKSDisplayRenderOverlayDescribing> {

	NSString* _name;
	NSString* _displayUUID;
	CADisplay* _display;
	BKSDisplayProgressIndicatorProperties* _progressIndicatorProperties;
	long long _interfaceOrientation;
	BOOL _lockBacklight;
	BOOL _interstitial;

}

@property (nonatomic,copy) NSString * displayUUID;                                                             //@synthesize displayUUID=_displayUUID - In the implementation block
@property (assign,setter=_setInterstitial:,getter=isInterstitial,nonatomic) BOOL interstitial;                 //@synthesize interstitial=_interstitial - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CADisplay * display;                                                            //@synthesize display=_display - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL lockBacklight;                                                               //@synthesize lockBacklight=_lockBacklight - In the implementation block
@property (nonatomic,retain) BKSDisplayProgressIndicatorProperties * progressIndicatorProperties;              //@synthesize progressIndicatorProperties=_progressIndicatorProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)descriptorWithName:(id)arg1 display:(id)arg2 ;
+(id)_classesRequiredToDecode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(CADisplay *)display;
-(NSString *)displayUUID;
-(BOOL)lockBacklight;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(BOOL)isInterstitial;
-(id)_initWithName:(id)arg1 displayUUID:(id)arg2 ;
-(id)initWithName:(id)arg1 display:(id)arg2 ;
-(void)setDisplayUUID:(NSString *)arg1 ;
-(void)setLockBacklight:(BOOL)arg1 ;
-(void)setProgressIndicatorProperties:(BKSDisplayProgressIndicatorProperties *)arg1 ;
-(void)_setInterstitial:(BOOL)arg1 ;
@end

