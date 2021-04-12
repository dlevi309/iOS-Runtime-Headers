/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBFolder, NSIndexPath, NSString;

@interface SBIconModelFolderCreationAction : NSObject <BSDescriptionProviding> {

	SBFolder* _folder;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) SBFolder * folder;                         //@synthesize folder=_folder - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSIndexPath *)indexPath;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBFolder *)folder;
-(id)initWithFolder:(id)arg1 indexPath:(id)arg2 ;
@end

