/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ADMRAIDAction, NSNumber, NSArray;

@interface ADAdActionPublicAttributes : NSObject <NSSecureCoding> {

	BOOL _actionLeavesApplication;
	BOOL _actionViewControllerHidesStatusBar;
	int _action;
	int _transitionType;
	unsigned long long _actionViewControllerPresentationOrientationMask;
	NSString* _actionURLString;
	ADMRAIDAction* _MRAIDAction;
	NSNumber* _adamIdentifier;
	NSArray* _iTunesMetadata;
	NSString* _calendarEventIdentifier;

}

@property (assign,nonatomic) BOOL actionLeavesApplication;                                                    //@synthesize actionLeavesApplication=_actionLeavesApplication - In the implementation block
@property (assign,nonatomic) int action;                                                                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long actionViewControllerPresentationOrientationMask;              //@synthesize actionViewControllerPresentationOrientationMask=_actionViewControllerPresentationOrientationMask - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerHidesStatusBar;                                         //@synthesize actionViewControllerHidesStatusBar=_actionViewControllerHidesStatusBar - In the implementation block
@property (assign,nonatomic) int transitionType;                                                              //@synthesize transitionType=_transitionType - In the implementation block
@property (nonatomic,copy) NSString * actionURLString;                                                        //@synthesize actionURLString=_actionURLString - In the implementation block
@property (nonatomic,copy) ADMRAIDAction * MRAIDAction;                                                       //@synthesize MRAIDAction=_MRAIDAction - In the implementation block
@property (nonatomic,copy) NSNumber * adamIdentifier;                                                         //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * iTunesMetadata;                                                          //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
@property (nonatomic,copy) NSString * calendarEventIdentifier;                                                //@synthesize calendarEventIdentifier=_calendarEventIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)transitionType;
-(NSArray *)iTunesMetadata;
-(void)setTransitionType:(int)arg1 ;
-(void)setActionURLString:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)action;
-(NSNumber *)adamIdentifier;
-(void)setAction:(int)arg1 ;
-(void)setAdamIdentifier:(NSNumber *)arg1 ;
-(id)description;
-(void)setITunesMetadata:(NSArray *)arg1 ;
-(id)_actionDescription;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)actionURLString;
-(void)dealloc;
-(BOOL)actionLeavesApplication;
-(void)setMRAIDAction:(ADMRAIDAction *)arg1 ;
-(ADMRAIDAction *)MRAIDAction;
-(void)setActionLeavesApplication:(BOOL)arg1 ;
-(unsigned long long)actionViewControllerPresentationOrientationMask;
-(BOOL)actionViewControllerHidesStatusBar;
-(NSString *)calendarEventIdentifier;
-(void)setCalendarEventIdentifier:(NSString *)arg1 ;
-(void)setActionViewControllerPresentationOrientationMask:(unsigned long long)arg1 ;
-(void)setActionViewControllerHidesStatusBar:(BOOL)arg1 ;
@end

