/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSSet, NSString;

@interface HFSelectedUserCollection : NSObject <NAIdentifiable> {

	unsigned long long _type;
	NSSet* _specificUsers;

}

@property (nonatomic,readonly) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSSet * specificUsers;              //@synthesize specificUsers=_specificUsers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)allUsersCollection;
+(id)currentUserCollection;
+(id)collectionWithSpecificUsers:(id)arg1 ;
+(id)collectionWithResolvedUsers:(id)arg1 inHome:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(id)resolveSelectedUsersWithHome:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 specificUsers:(id)arg2 ;
-(NSSet *)specificUsers;
@end

