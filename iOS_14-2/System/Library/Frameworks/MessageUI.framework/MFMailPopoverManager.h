/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSMutableArray, NSString;

@interface MFMailPopoverManager : NSObject <UIAdaptivePresentationControllerDelegate> {

	NSMutableArray* _passThroughProviders;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managerForWindow:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(void)enumerateManagersUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)addPassthroughViewProvider:(id)arg1 ;
-(void)removePassthroughViewProvider:(id)arg1 ;
-(id)allPassThroughViews;
-(id)_init;
-(void)dealloc;
@end

