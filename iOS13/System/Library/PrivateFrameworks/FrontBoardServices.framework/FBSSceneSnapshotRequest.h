/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol FBSSceneSnapshotRequestDelegate;
@class NSString, FBSSceneSettings;

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding> {

	NSString* _sceneID;
	FBSSceneSettings* _settings;
	BOOL _handled;
	id<FBSSceneSnapshotRequestDelegate> _delegate;
	BOOL _allowsProtectedContent;

}

@property (nonatomic,copy) NSString * sceneID;                                                 //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic,__weak) id<FBSSceneSnapshotRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSettings * settings;                               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) BOOL allowsProtectedContent;                                    //@synthesize allowsProtectedContent=_allowsProtectedContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<FBSSceneSnapshotRequestDelegate>)delegate;
-(void)setDelegate:(id<FBSSceneSnapshotRequestDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(FBSSceneSettings *)settings;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(id)initWithSettings:(id)arg1 allowsProtectedContent:(BOOL)arg2 ;
-(NSString *)sceneID;
-(void)setSceneID:(NSString *)arg1 ;
-(BOOL)allowsProtectedContent;
@end

