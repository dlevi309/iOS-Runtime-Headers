/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) NSArray * blacklist; 
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(MDPlistContainerRef)container;
-(NSMutableArray *)allKeys;
-(NSArray *)blacklist;
-(id)initWithPlistContainer:(MDPlistContainerRef)arg1 obj:(SCD_Struct_SS7)arg2 ;
-(double)doubleValueForKey:(const char*)arg1 ;
-(id)initWithPlistContainer:(MDPlistContainerRef)arg1 ;
-(BOOL)doesBundleExistInAppWhiteList:(id)arg1 ;
-(double)doubleValueForBundle:(id)arg1 ;
@end

