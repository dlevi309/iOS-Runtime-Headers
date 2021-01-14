/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUILibraryInterface.h>

@class NSString;

@interface SKUISoftwareLibraryInterface : NSObject <SKUILibraryInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stateForLibraryItem:(id)arg1 ;
-(BOOL)performActionForLibraryItem:(id)arg1 ;
-(id)exposedPlatformItemKinds;
-(void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

