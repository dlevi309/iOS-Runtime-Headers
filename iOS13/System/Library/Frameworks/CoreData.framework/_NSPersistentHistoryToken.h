/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentHistoryToken.h>

@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {

	NSDictionary* _storeTokens;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)storeTokens;
-(id)initWithTransactionNumber:(id)arg1 andStoreID:(id)arg2 ;
-(long long)compareToken:(id)arg1 error:(id*)arg2 ;
@end

