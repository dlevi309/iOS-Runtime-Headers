/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)contextToken;
-(void)setContextToken:(NSUUID *)arg1 ;
-(id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2 ;
-(id<PKPlugIn>)plugin;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)initWithExtension:(id)arg1 andContextToken:(id)arg2 ;
-(void)updateOverridesHostAppearance;
-(NSExtension *)extension;
-(BOOL)overridesHostAppearance;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
@end

