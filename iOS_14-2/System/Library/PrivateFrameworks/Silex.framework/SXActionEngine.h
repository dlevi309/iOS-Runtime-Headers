/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerFactory:(id)arg1 URLHost:(id)arg2 ;
-(id)init;
-(id)actionForURL:(id)arg1 ;
-(void)registerFactory:(id)arg1 additionType:(Class)arg2 ;
-(NSMutableDictionary *)additionFactories;
-(id)actionForAddition:(id)arg1 ;
-(NSMutableDictionary *)hostNameFactories;
@end

