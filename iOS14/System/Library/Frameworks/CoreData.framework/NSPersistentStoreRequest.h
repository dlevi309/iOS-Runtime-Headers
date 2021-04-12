/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {

	NSArray* _affectedStores;

}

@property (nonatomic,retain) NSArray * affectedStores; 
@property (readonly) unsigned long long requestType; 
+(void)initialize;
-(BOOL)_secureOperation;
-(unsigned long long)requestType;
-(NSArray *)affectedStores;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

