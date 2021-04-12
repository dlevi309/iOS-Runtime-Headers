/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/STKTelephonyListItemsProvider.h>

@class CoreTelephonyClient, NSString;

@interface STKTelephonySelectionListItemsProvider : NSObject <STKTelephonyListItemsProvider> {

	CoreTelephonyClient* _telephonyClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTelephonyClient:(id)arg1 ;
-(id)selectionListItemsForContext:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
@end

