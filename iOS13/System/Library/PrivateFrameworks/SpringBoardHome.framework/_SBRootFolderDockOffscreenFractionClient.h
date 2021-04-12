/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBDockOffscreenFractionModifying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBRootFolderView;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding> {

	NSString* _reason;
	SBRootFolderView* _folderView;
	double _desiredOffscreenFraction;

}

@property (nonatomic,retain) SBRootFolderView * folderView;                //@synthesize folderView=_folderView - In the implementation block
@property (assign,nonatomic) double desiredOffscreenFraction;              //@synthesize desiredOffscreenFraction=_desiredOffscreenFraction - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)reason;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDockOffscreenFraction:(double)arg1 ;
-(SBRootFolderView *)folderView;
-(id)initWithFolderView:(id)arg1 reason:(id)arg2 ;
-(double)desiredOffscreenFraction;
-(void)setDesiredOffscreenFraction:(double)arg1 ;
-(void)setFolderView:(SBRootFolderView *)arg1 ;
-(void)layoutIfNeededForDockOffscreenFractionChanged;
@end

