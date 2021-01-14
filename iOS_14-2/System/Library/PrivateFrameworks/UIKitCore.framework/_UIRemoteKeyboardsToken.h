/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIRemoteKeyboardsToken : NSObject {

	int _identifier;
	NSString* sceneIdentityString;

}

@property (nonatomic,copy) NSString * sceneIdentityString; 
+(id)uniqueToken;
-(id)init;
-(id)description;
-(void)setSceneIdentityString:(NSString *)arg1 ;
-(NSString *)sceneIdentityString;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

