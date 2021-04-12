/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIRemoteKeyboardsToken : NSObject {

	int _identifier;
	NSString* canvasIdentifier;

}

@property (nonatomic,copy) NSString * canvasIdentifier; 
+(id)uniqueToken;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)canvasIdentifier;
-(void)setCanvasIdentifier:(NSString *)arg1 ;
@end

