/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSUUID;

@interface _UIContextMenuActionsListSection : NSObject {

	NSUUID* _identifier;
	BOOL _isCompact;
	BOOL _prefersSingleLineActions;

}

@property (nonatomic,readonly) BOOL isCompact;                             //@synthesize isCompact=_isCompact - In the implementation block
@property (nonatomic,readonly) BOOL prefersSingleLineActions;              //@synthesize prefersSingleLineActions=_prefersSingleLineActions - In the implementation block
+(id)sectionWithMenu:(id)arg1 ;
-(BOOL)isCompact;
-(unsigned long long)hash;
-(BOOL)prefersSingleLineActions;
-(BOOL)isEqual:(id)arg1 ;
@end

