/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


#import <SpotlightServices/SpotlightServices-Structs.h>
@class NSMutableArray, NSArray;

@interface SSPlistDataReader : NSObject {

	MDPlistContainerRef _container;
	SCD_Struct_SS6 _obj;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSMutableArray * allKeys; 
@property (nonatomic,readonly) NSArray * blocklist; 
-(unsigned long long)count;
-(id)description;
-(NSMutableArray *)allKeys;
-(MDPlistContainerRef)container;
-(void)dealloc;
-(id)initWithPlistContainer:(MDPlistContainerRef)arg1 obj:(SCD_Struct_SS7)arg2 ;
-(double)doubleValueForKey:(const char*)arg1 ;
-(id)initWithPlistContainer:(MDPlistContainerRef)arg1 ;
-(NSArray *)blocklist;
-(BOOL)doesBundleExistInAppAllowList:(id)arg1 ;
-(double)doubleValueForBundle:(id)arg1 ;
@end

