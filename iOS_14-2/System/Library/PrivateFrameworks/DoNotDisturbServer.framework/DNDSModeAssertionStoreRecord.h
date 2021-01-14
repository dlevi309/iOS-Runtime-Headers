/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSArray, NSString;

@interface DNDSModeAssertionStoreRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSArray* _assertions;
	NSArray* _invalidations;
	NSArray* _invalidationRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * assertions;                        //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSArray * invalidations;                     //@synthesize invalidations=_invalidations - In the implementation block
@property (nonatomic,retain) NSArray * invalidationRequests;              //@synthesize invalidationRequests=_invalidationRequests - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForAssertionStore:(id)arg1 ;
-(NSArray *)assertions;
-(NSArray *)invalidations;
-(id)object;
-(void)setInvalidations:(NSArray *)arg1 ;
-(void)setAssertions:(NSArray *)arg1 ;
-(void)setInvalidationRequests:(NSArray *)arg1 ;
-(NSArray *)invalidationRequests;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
@end

