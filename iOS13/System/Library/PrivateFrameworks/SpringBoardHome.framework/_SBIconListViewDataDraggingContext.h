/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBIconView, NSString;

@interface _SBIconListViewDataDraggingContext : NSObject <BSDescriptionProviding> {

	BOOL _allowsMoveOperation;
	SBIconView* _iconView;
	NSString* _bestAvailableUTI;
	long long _fileOptions;

}

@property (nonatomic,readonly) SBIconView * iconView;                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) NSString * bestAvailableUTI;              //@synthesize bestAvailableUTI=_bestAvailableUTI - In the implementation block
@property (nonatomic,readonly) BOOL allowsMoveOperation;                 //@synthesize allowsMoveOperation=_allowsMoveOperation - In the implementation block
@property (nonatomic,readonly) long long fileOptions;                    //@synthesize fileOptions=_fileOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)allowsMoveOperation;
-(SBIconView *)iconView;
-(id)initWithIconView:(id)arg1 bestUTI:(id)arg2 allowsMoveOperation:(BOOL)arg3 fileOptions:(long long)arg4 ;
-(NSString *)bestAvailableUTI;
-(long long)fileOptions;
@end

