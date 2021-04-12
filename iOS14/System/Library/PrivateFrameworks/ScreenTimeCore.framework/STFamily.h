/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(STFamilyMember *)me;
-(id)dictionaryRepresentation;
-(void)setMe:(STFamilyMember *)arg1 ;
-(NSString *)dataSource;
-(NSArray *)members;
-(void)setDataSource:(NSString *)arg1 ;
-(void)setMembers:(NSArray *)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMembers:(id)arg1 ;
@end

