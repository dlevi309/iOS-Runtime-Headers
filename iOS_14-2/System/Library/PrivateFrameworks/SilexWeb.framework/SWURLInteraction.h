/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)perform;
-(NSString *)description;
-(id<SWNavigationManager>)navigationManager;
-(unsigned long long)type;
-(NSURL *)URL;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithURL:(id)arg1 navigationManager:(id)arg2 ;
@end

