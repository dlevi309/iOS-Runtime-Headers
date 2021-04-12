/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

