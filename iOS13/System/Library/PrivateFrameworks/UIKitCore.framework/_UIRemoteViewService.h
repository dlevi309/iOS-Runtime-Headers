/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSExtension, NSUUID;

@interface _UIRemoteViewService : NSObject {

	BOOL _overridesHostAppearance;
	NSExtension* _extension;
	NSUUID* _contextToken;

}

@property (nonatomic,retain) NSExtension * extension;                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) BOOL overridesHostAppearance;              //@synthesize overridesHostAppearance=_overridesHostAppearance - In the implementation block
@property (nonatomic,copy) NSUUID * contextToken;                         //@synthesize contextToken=_contextToken - In the implementation block
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)initWithExtension:(id)arg1 andContextToken:(id)arg2 ;
-(id<PKPlugIn>)plugin;
-(NSUUID *)contextToken;
-(BOOL)overridesHostAppearance;
-(void)updateOverridesHostAppearance;
-(id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2 ;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
-(void)setContextToken:(NSUUID *)arg1 ;
@end

