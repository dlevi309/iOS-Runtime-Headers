/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFTransformItem.h>
#import <libobjc.A.dylib/HFItemDeletionProtocol.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class NSString;

@interface _HFDeletableTransformItem : HFTransformItem <HFItemDeletionProtocol, HFHomeObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hf_canDeleteItem;
-(id)hf_deleteItem;
@end

