/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol DDActionDelegate;
@class CNContact, NSString, UIViewController, NSDictionary, NSURL, NSObject, UIImage;

@interface DDAction : NSObject <NSCoding, NSSecureCoding> {

	_DDResult* _result;
	_DDResult* _coalescedResult;
	CFArrayRef _associatedResults;
	CNContact* _contact;
	NSString* _ics;
	UIViewController* _viewController;
	NSDictionary* _context;
	NSURL* _url;
	BOOL _cachedCoalescedResult;
	BOOL _cachedAssociatedResults;
	BOOL _isDefaultAction;
	BOOL _isCompanion;
	BOOL _hasCompanion;
	int _hostApplication;
	NSObject*<DDActionDelegate> _delegate;

}

@property (retain) CNContact * contact;                                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                        //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (assign,nonatomic) BOOL isDefaultAction;                                     //@synthesize isDefaultAction=_isDefaultAction - In the implementation block
@property (assign,nonatomic) int hostApplication;                                      //@synthesize hostApplication=_hostApplication - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<DDActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL companion;                                           //@synthesize isCompanion=_isCompanion - In the implementation block
@property (nonatomic,__weak,readonly) DDAction * companionAction; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)clientActionsDelegate;
+(void)setClientActionsDelegate:(id)arg1 ;
+(BOOL)actionAvailableForContact:(id)arg1 ;
+(id)encodableContextWithContext:(id)arg1 ;
+(id)actionWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
+(id)actionsWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
+(id)contextByAddingValue:(id)arg1 toKey:(id)arg2 inContext:(id)arg3 ;
+(id)defaultActionWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(id)localizedName;
-(void)setViewController:(UIViewController *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSObject*<DDActionDelegate>)delegate;
-(UIImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCompanion:(BOOL)arg1 ;
-(id)generateIdentifier;
-(id)context;
-(void)perform;
-(id)url;
-(void)setDelegate:(NSObject*<DDActionDelegate>)arg1 ;
-(id)description;
-(UIViewController *)viewController;
-(BOOL)companion;
-(_DDResult*)result;
-(id)initWithCoder:(id)arg1 ;
-(int)interactionType;
-(void)invalidate;
-(id)notificationTitle;
-(BOOL)hasUserInterface;
-(BOOL)isDefaultAction;
-(void)dealloc;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(const CFArrayRef)associatedResults;
-(void)performFromView:(id)arg1 ;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(void)addToRecents;
-(void)setIsDefaultAction:(BOOL)arg1 ;
-(void)setupPopoverPresentationController:(id)arg1 view:(id)arg2 ;
-(BOOL)canBePerformedWhenDeviceIsLocked;
-(BOOL)canBePerformedByOpeningURL;
-(_DDResult*)coalescedResult;
-(DDAction *)companionAction;
-(void)_performFromView:(id)arg1 byOpeningURL:(id)arg2 disableAppLink:(BOOL)arg3 ;
-(void)_copyURL:(id)arg1 andString:(id)arg2 ;
-(void)_performFromView:(id)arg1 byOpeningURL:(id)arg2 ;
-(void)_copyStringOnly:(id)arg1 ;
-(void)_copyURL:(id)arg1 ;
-(id)localizedSubItemName;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(id)displayNameForEmails:(id)arg1 phoneNumbers:(id)arg2 ;
-(int)hostApplication;
-(void)setHostApplication:(int)arg1 ;
@end

