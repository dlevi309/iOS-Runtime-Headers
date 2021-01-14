/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)initWithSettings:(id)arg1 allowsProtectedContent:(BOOL)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setSceneID:(NSString *)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(id<FBSSceneSnapshotRequestDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)allowsProtectedContent;
-(void)setDelegate:(id<FBSSceneSnapshotRequestDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(FBSSceneSettings *)settings;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)sceneID;
@end

