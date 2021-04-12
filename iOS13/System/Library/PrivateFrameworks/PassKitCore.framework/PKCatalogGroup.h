/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSMutableArray;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUbiquitous;
	NSNumber* _groupID;
	NSMutableArray* _uniqueIDs;

}

@property (nonatomic,retain) NSNumber * groupID;                      //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueIDs;              //@synthesize uniqueIDs=_uniqueIDs - In the implementation block
@property (assign,nonatomic) BOOL isUbiquitous;                       //@synthesize isUbiquitous=_isUbiquitous - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUbiquitous;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(BOOL)isEqualToGroup:(id)arg1 ;
-(NSMutableArray *)uniqueIDs;
-(void)setUniqueIDs:(NSMutableArray *)arg1 ;
-(void)setIsUbiquitous:(BOOL)arg1 ;
@end

