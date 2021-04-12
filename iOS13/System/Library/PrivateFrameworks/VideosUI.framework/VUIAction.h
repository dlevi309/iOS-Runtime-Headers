/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIAction.h>

@protocol VUIAction <NSObject>
@required
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


@class NSString;

@interface VUIAction : NSObject <VUIAction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithDictionary:(id)arg1 viewElement:(id)arg2 appContext:(id)arg3 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

