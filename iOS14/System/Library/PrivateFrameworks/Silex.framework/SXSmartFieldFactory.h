/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXSmartFieldFactory.h>

@protocol SXSmartFieldFactory <NSObject>
@required
-(id)smartFieldForAddition:(id)arg1 withContext:(id)arg2;

@end


@protocol SXActionProvider, SXActionSerializer;
@class NSString;

@interface SXSmartFieldFactory : NSObject <SXSmartFieldFactory> {

	id<SXActionProvider> _actionProvider;
	id<SXActionSerializer> _actionSerializer;

}

@property (nonatomic,readonly) id<SXActionProvider> actionProvider;                  //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,readonly) id<SXActionSerializer> actionSerializer;              //@synthesize actionSerializer=_actionSerializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionProvider>)actionProvider;
-(id)smartFieldForAddition:(id)arg1 withContext:(id)arg2 ;
-(id)initWithActionProvider:(id)arg1 actionSerializer:(id)arg2 ;
-(id<SXActionSerializer>)actionSerializer;
@end

