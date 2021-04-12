/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconListLayoutProvider.h>

@protocol SBIconListLayout;
@class NSDictionary;

@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {

	NSDictionary* _listLayouts;
	id<SBIconListLayout> _defaultLayout;

}

@property (nonatomic,copy,readonly) NSDictionary * listLayouts;                 //@synthesize listLayouts=_listLayouts - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayout> defaultLayout;              //@synthesize defaultLayout=_defaultLayout - In the implementation block
-(id)init;
-(id<SBIconListLayout>)defaultLayout;
-(id)layoutForIconLocation:(id)arg1 ;
-(id)initWithListLayouts:(id)arg1 defaultLayout:(id)arg2 ;
-(NSDictionary *)listLayouts;
-(id)initWithListLayouts:(id)arg1 ;
@end

