/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionProvider.h>

@class NSMutableDictionary, NSString;

@interface SXActionEngine : NSObject <SXActionProvider> {

	NSMutableDictionary* _additionFactories;
	NSMutableDictionary* _hostNameFactories;

}

@property (nonatomic,readonly) NSMutableDictionary * additionFactories;              //@synthesize additionFactories=_additionFactories - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * hostNameFactories;              //@synthesize hostNameFactories=_hostNameFactories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)actionForAddition:(id)arg1 ;
-(id)actionForURL:(id)arg1 ;
-(NSMutableDictionary *)additionFactories;
-(NSMutableDictionary *)hostNameFactories;
-(void)registerFactory:(id)arg1 additionType:(Class)arg2 ;
-(void)registerFactory:(id)arg1 URLHost:(id)arg2 ;
@end

