/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_classesRequiredToDecode;
+(id)descriptorWithName:(id)arg1 display:(id)arg2 ;
-(id)succinctDescription;
-(void)setDisplayUUID:(NSString *)arg1 ;
-(NSString *)displayUUID;
-(void)_setInterstitial:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithName:(id)arg1 displayUUID:(id)arg2 ;
-(void)setProgressIndicatorProperties:(BKSDisplayProgressIndicatorProperties *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)lockBacklight;
-(void)setLockBacklight:(BOOL)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 display:(id)arg2 ;
-(NSString *)description;
-(long long)interfaceOrientation;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(unsigned long long)hash;
-(CADisplay *)display;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isInterstitial;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
@end

