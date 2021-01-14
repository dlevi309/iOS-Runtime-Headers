/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDataSourceSnapshot.h>

@protocol _UIDataSourceSnapshot <NSObject>
@required
-(long long)numberOfItemsInSection:(long long)arg1;
-(long long)numberOfSections;

@end


@class _UIDataSourceSnapshotter, NSString;

@interface _UIDataSourceSnapshot : NSObject <_UIDataSourceSnapshot> {

	_UIDataSourceSnapshotter* _snapshotter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfItems;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(long long)sectionForGlobalIndex:(long long)arg1 ;
-(NSRange)rangeForSection:(long long)arg1 ;
-(id)initWithDataSourceSnapshotter:(id)arg1 ;
@end

