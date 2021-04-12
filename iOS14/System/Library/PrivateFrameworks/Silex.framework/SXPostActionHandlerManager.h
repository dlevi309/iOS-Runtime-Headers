/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXPostActionHandlerManager.h>

@protocol SXPostActionHandlerManager <NSObject,SXPostActionHandler>
@required
-(void)addPostActionHandler:(id)arg1 forActionType:(id)arg2;
-(void)removePostActionHandler:(id)arg1 forActionType:(id)arg2;

@end


@class NSMutableDictionary, NSString;

@interface SXPostActionHandlerManager : NSObject <SXPostActionHandlerManager> {

	NSMutableDictionary* _postActionHandlers;

}

@property (nonatomic,readonly) NSMutableDictionary * postActionHandlers;              //@synthesize postActionHandlers=_postActionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)handledAction:(id)arg1 state:(unsigned long long)arg2 ;
-(void)addPostActionHandler:(id)arg1 forActionType:(id)arg2 ;
-(void)removePostActionHandler:(id)arg1 forActionType:(id)arg2 ;
-(NSMutableDictionary *)postActionHandlers;
@end

