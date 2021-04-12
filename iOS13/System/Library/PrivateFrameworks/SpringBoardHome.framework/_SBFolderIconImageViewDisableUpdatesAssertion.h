/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBFolderIconImageView, NSString;

@interface _SBFolderIconImageViewDisableUpdatesAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BOOL _invalidated;
	SBFolderIconImageView* _folderIconImageView;
	NSString* _reason;

}

@property (nonatomic,__weak,readonly) SBFolderIconImageView * folderIconImageView;              //@synthesize folderIconImageView=_folderIconImageView - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                          //@synthesize reason=_reason - In the implementation block
@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                             //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)reason;
-(BOOL)isInvalidated;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(SBFolderIconImageView *)folderIconImageView;
-(id)initWithFolderIconImageView:(id)arg1 reason:(id)arg2 ;
@end

