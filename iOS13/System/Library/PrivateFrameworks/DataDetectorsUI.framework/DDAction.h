/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<DDActionDelegate>)delegate;
-(void)setDelegate:(NSObject*<DDActionDelegate>)arg1 ;
-(_DDResult*)result;
-(id)url;
-(id)localizedName;
-(id)context;
-(int)interactionType;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setCompanion:(BOOL)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIImage *)icon;
-(UIViewController *)viewController;
-(BOOL)isDefaultAction;
-(BOOL)hasUserInterface;
-(void)perform;
-(BOOL)companion;
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
-(id)notificationTitle;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(id)generateIdentifier;
-(id)displayNameForEmails:(id)arg1 phoneNumbers:(id)arg2 ;
-(int)hostApplication;
-(void)setHostApplication:(int)arg1 ;
@end

