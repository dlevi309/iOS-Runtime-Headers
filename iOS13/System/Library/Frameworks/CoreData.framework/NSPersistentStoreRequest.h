/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)requestType;
-(BOOL)_secureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(NSArray *)affectedStores;
@end

