/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <libobjc.A.dylib/STKTelephonyListItemsProvider.h>

@class NSString;

@interface STKTelephonySelectionListItemsProvider : NSObject <STKTelephonyListItemsProvider> {

	CTServerConnectionRef _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithConnection:(CTServerConnectionRef)arg1 ;
-(id)selectionListItemsFromOptions:(id)arg1 ;
@end

