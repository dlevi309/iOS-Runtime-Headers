/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, STFamilyMember, NSString;

@interface STFamily : NSObject <NSCopying> {

	NSArray* _members;
	STFamilyMember* _me;
	NSString* _dataSource;

}

@property (nonatomic,copy) NSString * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSArray * members;                  //@synthesize members=_members - In the implementation block
@property (nonatomic,retain) STFamilyMember * me;              //@synthesize me=_me - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(STFamilyMember *)me;
-(void)setMe:(STFamilyMember *)arg1 ;
-(NSArray *)members;
-(NSString *)dataSource;
-(void)setDataSource:(NSString *)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 ;
-(void)setMembers:(NSArray *)arg1 ;
-(id)initWithMembers:(id)arg1 ;
@end

