/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface _UIDatePickerCalendarTimeWheelDisplayModeDriver : NSObject <UIGestureRecognizerDelegate> {

	unsigned long long _displayMode;
	/*^block*/id _updateHandler;
	/*^block*/id _invalidationRequestHandler;

}

@property (nonatomic,readonly) id invalidationRequestHandler;              //@synthesize invalidationRequestHandler=_invalidationRequestHandler - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;               //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)updateHandler;
-(unsigned long long)displayMode;
-(id)invalidationRequestHandler;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(id)initWithInvalidationRequestHandler:(/*^block*/id)arg1 ;
@end

