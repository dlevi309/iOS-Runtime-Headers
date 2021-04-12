/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@class NSMutableDictionary, NSDictionary;

@interface MBAggregateDictionary : NSObject {

	NSMutableDictionary* _scalars;

}

@property (nonatomic,readonly) NSDictionary * scalars; 
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)pushValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)incrementScalarKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)save;
-(void)_addScalarValue:(unsigned long long)arg1 forKey:(id)arg2 ;
-(NSDictionary *)scalars;
-(void)addCountAndSizeOfFile:(id)arg1 ;
-(void)addFileSize:(unsigned long long)arg1 containerID:(id)arg2 aggregateDictionaryGroup:(id)arg3 ;
@end

