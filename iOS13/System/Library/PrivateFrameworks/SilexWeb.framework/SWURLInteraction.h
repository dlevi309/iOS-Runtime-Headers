/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWInteraction.h>

@protocol SWNavigationManager;
@class NSURL, NSString;

@interface SWURLInteraction : NSObject <SWInteraction> {

	NSURL* _URL;
	id<SWNavigationManager> _navigationManager;

}

@property (nonatomic,readonly) id<SWNavigationManager> navigationManager;              //@synthesize navigationManager=_navigationManager - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(NSURL *)URL;
-(void)perform;
-(id<SWNavigationManager>)navigationManager;
-(id)initWithURL:(id)arg1 navigationManager:(id)arg2 ;
@end

